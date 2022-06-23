/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 07:03:56 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/24 08:03:30 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static int	is_quatation_mark(char c, int *flag_s, int *flag_d)
{
	if (c == '"')
		*flag_s ^= 1;
	if (c == '\'')
		*flag_d ^= 1;
	return (*flag_s | *flag_d);
}

static size_t	delimiter_locate(char *s)
{
	int		flag_s;
	int		flag_d;
	char	*tmp;

	flag_s = 0;
	flag_d = 0;
	tmp = s;
	while (*s)
	{
		if (is_quatation_mark(*s, &flag_s, &flag_d))
			s++;
		else if (*s == ' ' && !flag_s && !flag_d)
			return (s - tmp);
		else
			s++;
	}
	return (0);
}

static int	elem_count(char *s)
{
	int		cnt;
	size_t	locate;

	cnt = 1;
	locate = 0;
	while (*s)
	{
		locate = delimiter_locate(s);
		if (!locate)
			return (cnt);
		cnt++;
		s += locate + 1;
	}
	return (cnt);
}

static char
	**copy_elems(char *cmds, int cnt, char **split, t_pipex *px)
{
	while (px->idx < cnt)
	{
		px->locate = delimiter_locate(cmds);
		if (!px->locate)
			return (subelems(cmds, split, px));
		subelems(cmds, split, px);
		px->idx++;
		cmds += px->locate + 1;
	}
	return (split);
}

char	**split_cmds(char *cmds, t_pipex *px)
{
	int		cnt;
	char	**split;

	cnt = elem_count(cmds);
	split = malloc(sizeof(char *) * (cnt + 1));
	if (!split)
		exit_fail(0, NULL, px);
	return (copy_elems(cmds, cnt, split, px));
}
