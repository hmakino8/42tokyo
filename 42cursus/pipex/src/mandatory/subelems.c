/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subelems.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 07:32:59 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/27 02:07:51 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**subelems(char *cmds, char **split, t_pipex *px)
{
	char	*trim;

	if (!*cmds)
		return (split);
	trim = ft_strtrim(cmds, "\"'");
	if (!trim)
		exit_fail(0, NULL, px);
	if (!px->locate)
	{
		split[px->idx] = ft_strdup(trim);
		if (!split[px->idx])
			exit_fail(0, NULL, px);
		return (split);
	}
	split[px->idx] = ft_substr(trim, 0, px->locate);
	if (!split[px->idx])
		exit_fail(0, NULL, px);
	return (split);
}
