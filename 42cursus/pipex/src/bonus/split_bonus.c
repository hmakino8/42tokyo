/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:02:30 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/28 03:18:06 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static bool	is_quotation_mark(char c)
{
	if (c == '\'' || c == '"')
		return (true);
	return (false);
}

static size_t	element_cnt(char *cmds, t_pipex *px)
{
	size_t	cnt;
	char	q_mark;

	cnt = 0;
	while (*cmds)
	{
		if (*cmds++ != ' ')
		{
			cnt++;
			while (*cmds && *cmds != ' ')
				cmds++;
		}
		if (is_quotation_mark(*cmds) == true)
		{
			cnt++;
			q_mark = *cmds++;
			while (*cmds != q_mark)
				cmds++;
			cmds++;
		}
	}
	return (cnt);
}

static void	sub_elems(char *cmds, size_t len, t_pipex *px)
{
	px->cmd[px->idx] = ft_substr(cmds, 0, len);
	if (!(px->cmd[px->idx]))
		exit_fail(0, NULL, px);
	px->idx++;
}

static void	element_cpy(char *cmds, size_t cnt, t_pipex *px)
{
	size_t	len;
	char	q_mark;

	px->idx = 0;
	while (*cmds && px->idx < cnt)
	{
		len = 0;
		if (is_quotation_mark(*cmds) == true)
		{
			q_mark = *cmds++;
			while (*(cmds + len) && *(cmds + len) != q_mark)
				len++;
			sub_elems(cmds, len, px);
			cmds += len + 1;
		}
		if (*cmds && *cmds != ' ')
		{
			while (*(cmds + len) && *(cmds + len) != ' ')
				len++;
			sub_elems(cmds, len, px);
			cmds += len;
		}
		cmds++;
	}
}

void	split_cmds(char *cmds, t_pipex *px)
{
	size_t	cnt;

	if (!cmds)
		return ;
	cnt = element_cnt(cmds, px);
	px->cmd = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!px->cmd)
		exit_fail(0, NULL, px);
	px->cmd[cnt + 1] = NULL;
	return (element_cpy(cmds, cnt, px));
}
