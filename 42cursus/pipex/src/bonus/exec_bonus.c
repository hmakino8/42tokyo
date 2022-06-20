/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:29:23 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/14 03:13:02 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	close_pipes(t_pipex *px)
{
	int	i;

	i = 0;
	while (i < px->pipe_cnt)
		close(px->pipe[i++]);
}

static void	duplicate(int idx, t_pipex *px)
{
	int	i;

	i = 2 * idx - 2;
	if (idx == 0)
	{
		dup2(px->i_fd, 0);
		dup2(px->pipe[1], 1);
	}
	else if (idx == px->cmd_cnt - 1)
	{
		dup2(px->pipe[i], 0);
		dup2(px->o_fd, 1);
	}
	else
	{
		dup2(px->pipe[i], 0);
		dup2(px->pipe[i + 3], 1);
	}
}

void	exec_pipes(char **av, char **envp, t_pipex *px)
{
	int		i;
	pid_t	pid;

	i = -1;
	while (++i < px->cmd_cnt)
	{
		pid = fork();
		if (pid < 0)
			exit_fail(0, "fork", px);
		if (!pid)
		{
			duplicate(i, px);
			close_pipes(px);
			px->cmd_op = ft_split(av[2 + px->h_flag + i], ' ');
			if (!px->cmd_op)
				exit_fail(0, "malloc", px);
			get_cmd(px->cmd_op[0], px);
			if (!px->fullpath_cmd)
				exit_fail(ERR_CMD, px->cmd_op[0], px);
			if (execve(px->fullpath_cmd, px->cmd_op, envp) < 0)
				exit_fail(0, "execve", px);
			exit(EXIT_SUCCESS);
		}
	}
}
