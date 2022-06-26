/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:19:26 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/24 08:02:45 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static void	check_args(int ac, char **av, t_pipex *px)
{
	if (ac < 5)
		return (exit_fail(ERR_ARG, NULL, px));
	if (!ft_strncmp(av[1], "here_doc", 9))
	{
		if (ac == 5)
			return (exit_fail(ERR_ARG, NULL, px));
		px->h_flag = 2;
	}
}

static void	init_pipex(t_pipex *px)
{
	px->idx = 0;
	px->locate = 0;
	px->h_flag = 0;
	px->pipe = NULL;
	px->fullpath_cmd = NULL;
	px->dev_envp = NULL;
	px->cmd_op = NULL;
}

int	main(int ac, char **av, char **envp)
{
	t_pipex	px;

	init_pipex(&px);
	check_args(ac, av, &px);
	get_files(ac, av, &px);
	get_paths(envp, &px);
	get_pipes(ac, &px);
	exec_pipes(av, envp, &px);
	close_pipes(&px);
	waitpid(-1, NULL, 0);
	free_alloc_memory(&px);
	if (px.h_flag)
		unlink(".heredoc");
	return (0);
}
