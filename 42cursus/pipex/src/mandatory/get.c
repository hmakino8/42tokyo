/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:26:41 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/19 17:29:47 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	get_heredoc(char *limiter, t_pipex *px)
{
	int		cmp;
	char	*gnl;

	px->h_fd = open(".heredoc", O_CREAT | O_WRONLY | O_TRUNC, 0000644);
	if (px->h_fd < 0)
		return (exit_fail(ERR_HEREDOC, NULL, px));
	cmp = 1;
	while (cmp)
	{
		write(1, "heredoc> ", 9);
		gnl = get_next_line(0);
		if (gnl == NULL)
			exit_fail(ERR_GNL, NULL, px);
		cmp = ft_strncmp(limiter, gnl, ft_strlen(limiter));
		if (cmp)
			write(px->h_fd, gnl, ft_strlen(gnl));
		free(gnl);
	}
}

void	get_files(int ac, char **av, t_pipex *px)
{
	if (px->h_flag)
	{
		get_heredoc(av[2], px);
		close(px->h_fd);
		px->i_fd = open(".heredoc", O_RDONLY);
		if (px->i_fd < 0)
			return (exit_fail(ERR_HEREDOC, NULL, px));
		px->h_flag = 1;
		px->o_fd = open(av[ac - 1], O_WRONLY | O_CREAT | O_APPEND, 0000644);
		if (px->o_fd < 0)
			return (exit_fail(ERR_HEREDOC, NULL, px));
		return ;
	}
	px->i_fd = open(av[1], O_RDONLY);
	if (px->i_fd < 0)
		return (exit_fail(0, av[1], px));
	px->o_fd = open(av[ac - 1], O_CREAT | O_RDWR | O_TRUNC, 0000644);
	if (px->o_fd < 0)
		return (exit_fail(0, av[ac - 1], px));
}

void	get_paths(char **envp, t_pipex *px)
{
	while (ft_strncmp("PATH", *envp, 4))
	{
		if (*envp == NULL)
			return (exit_fail(ERR_PATH, NULL, px));
		envp++;
	}
	px->dev_envp = ft_split(*envp + 5, ':');
	if (px->dev_envp == NULL)
		return (exit_fail(0, "malloc", px));
}

void	get_pipes(int ac, t_pipex *px)
{
	int	i;

	px->cmd_cnt = ac - 3 - px->h_flag;
	px->pipe_cnt = 2 * (px->cmd_cnt - 1);
	px->pipe = malloc(sizeof(int) * px->pipe_cnt);
	if (!px->pipe)
		return (exit_fail(0, "malloc", px));
	i = 0;
	while (i < px->cmd_cnt - 1)
	{
		if (pipe(px->pipe + 2 * i++) < 0)
			return (exit_fail(0, "pipe", px));
	}
}

void	get_cmd(char *cmd, t_pipex *px)
{
	int		i;
	char	*tmp;

	i = 0;
	while (px->dev_envp[i])
	{
		tmp = ft_strjoin(px->dev_envp[i++], "/");
		if (!tmp)
			exit_fail(0, "malloc", px);
		px->fullpath_cmd = ft_strjoin(tmp, cmd);
		free(tmp);
		tmp = NULL;
		if (!px->fullpath_cmd)
			exit_fail(0, "malloc", px);
		if (access(px->fullpath_cmd, 0) == 0)
			return ;
		free(px->fullpath_cmd);
		px->fullpath_cmd = NULL;
	}
}
