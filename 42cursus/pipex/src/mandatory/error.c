/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:25:52 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/14 03:06:03 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exit_fail(int err_num, char *err, t_pipex *px)
{
	ft_dprintf(2, "%s", "Error: ");
	if (err_num == ERR_ARG)
		ft_dprintf(2, "%s\n", "too few arguments");
	if (err_num == ERR_HEREDOC)
		ft_dprintf(2, "%s\n", "here_doc: fail to read");
	if (err_num == ERR_PATH)
		ft_dprintf(2, "%s\n", "path does not exit");
	if (err_num == ERR_CMD)
		ft_dprintf(2, "%s%s\n", "command not found: ", err);
	if (!err_num)
		perror(err);
	if (px->h_flag)
		unlink(".heredoc");
	free_alloc_memory(px);
	exit(EXIT_FAILURE);
}
