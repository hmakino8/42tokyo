/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 07:03:56 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/27 17:12:10 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static int	is_quotation_mark(char *cmds, size_t *len)
{
	int	flag_s;
	int	flag_d;

	flag_s = (*cmds == '\'');
	flag_d = (*cmds == '"');
	*len = (flag_s | flag_d);
	while (flag_s && cmds[*len] != '\'' || (flag_d && cmds[*len] != '"'))
		(*len)++;
	return (flag_s | flag_d);
}

static size_t	delimiter_locate(char *cmds)
{
	size_t	len;

	len = 0;
	if (is_quotation_mark(cmds + len, &len))
		return (len);
	while (*(cmds + len))
	{
		if (*(cmds + len) == ' ')
			return (len);
		len++;
	}
	return (0);
}

static int	elem_count(char *cmds)
{
	int		cnt;
	size_t	locate;

	cnt = 1;
	locate = 0;
	while (*cmds)
	{
		locate = delimiter_locate(cmds);
		if (!locate)
			return (cnt);
		cnt++;
		cmds += locate + 1;
	}
	return (cnt);
}

static char	**copy_elems(char *cmds, int cnt, char **split, t_pipex *px)
{
	while (px->idx < cnt)
	{
		while (*cmds == ' ')
			cmds++;
		px->locate = delimiter_locate(cmds);
		if (!px->locate)
			return (subelems(cmds, split, px));
		subelems(cmds, split, px);
		px->idx++;
		cmds += px->locate + 1;
	}
	return (split);
}

//char	**split_cmds(char *cmds, t_pipex *px)
//{
//	int		cnt;
//	char	**split;
//
//	cnt = elem_count(cmds);
//	split = malloc(sizeof(char *) * (cnt + 1));
//	if (!split)
//		exit_fail(0, NULL, px);
//	split[cnt + 1] = NULL;
//	return (copy_elems(cmds, cnt, split, px));
//}
