/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:28:16 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/24 08:02:32 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static void	free_double_ptr(char **d_ptr)
{
	int	i;

	i = 0;
	while (d_ptr[i])
	{
		free(d_ptr[i]);
		i++;
	}
	free(d_ptr);
}

void	free_alloc_memory(t_pipex *px)
{
	free(px->pipe);
	free(px->fullpath_cmd);
	if (px->dev_envp)
		free_double_ptr(px->dev_envp);
	if (px->cmd_op)
		free_double_ptr(px->cmd_op);
}