/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:08:02 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/28 03:17:53 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <sys/types.h>

# include "../../libs/libft/libft.h"
# include "../../libs/gnl/get_next_line.h"
# include "../../libs/ft_dprintf/ft_dprintf.h"

typedef struct s_pipex
{
	int		i_fd;
	int		o_fd;
	int		h_fd;
	int		flag_h;
	int		cmd_cnt;
	int		pipe_cnt;
	int		*pipe;
	size_t	idx;
	size_t	locate;
	char	*fullpath_cmd;
	char	**dev_envp;
	char	**cmd;
}	t_pipex;

# define ERR_ARG 1
# define ERR_CMD 2
# define ERR_GNL 3
# define ERR_PIPE 4
# define ERR_PATH 5
# define ERR_HEREDOC 6
# define FLAGGED_HEREDOC 7

//pipex_bonus.c
void	close_pipes(t_pipex *px);
//get_bonus.c
void	get_files(int ac, char **av, t_pipex *px);
void	get_paths(char **envp, t_pipex *px);
void	get_pipes(int ac, t_pipex *px);
void	get_cmd(char *cmd, t_pipex *px);
//split_bonus.c
void	split_cmds(char *cmds, t_pipex *px);
//exec_bonus.c
void	exec_pipes(char **av, char **envp, t_pipex *px);
//free_bonus.c
void	free_alloc_memory(t_pipex *px);
//error_bonus.c
void	exit_fail(int err_num, char *err, t_pipex *px);

#endif
