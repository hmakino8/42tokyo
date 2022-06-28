/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:02:30 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/28 09:12:34 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static bool	is_quotation_mark(char c)
{
	if (c == '\'' || c == '"')
		return (true);
	return (false);
}

static size_t	element_count(char *cmds, t_pipex *px)
{
	size_t	cnt;
	char	q_mark;

	cnt = 1;
	while (*cmds)
	{
		if (is_quotation_mark(*cmds) == true)
		{
			q_mark = *cmds++;
			while (*cmds && *cmds != q_mark)
				cmds++;
			cmds++;
		}
		else if (*cmds && *cmds != ' ')
		{
			while (*cmds && *cmds != ' ' && \
				is_quotation_mark(*cmds) == false)
				cmds++;
		}
		if (*cmds == ' ')
			cnt++;
		while (*cmds && *cmds == ' ')
			cmds++;
	}
	return (cnt);
}

static char	*elems_join(char *cmds, t_pipex *px)
{
	size_t	len;
	char	*tmp;
	char	q_mark;

	while (*cmds && *cmds != ' ')
	{
		len = 0;
		if (is_quotation_mark(*cmds) == true)
		{
			q_mark = *cmds++;
			while (*(cmds + len) && *(cmds + len) != q_mark)
				len++;
			tmp = ft_substr(cmds, 0, len);
			if (!tmp)
				exit_fail(0, NULL, px);
			px->cmd[px->idx] = ft_strjoin(px->cmd[px->idx], tmp);
			free(tmp);
			if (!px->cmd[px->idx])
				exit_fail(0, NULL, px);
			cmds += len + 1;
		}
		else if (*cmds && *cmds != ' ')
		{
			while (*(cmds + len) && *(cmds + len) != ' ' && \
				is_quotation_mark(*(cmds + len)) == false)
				len++;
			tmp = ft_substr(cmds, 0, len);
			if (!tmp)
				exit_fail(0, NULL, px);
			px->cmd[px->idx] = ft_strjoin(px->cmd[px->idx], tmp);
			free(tmp);
			if (!px->cmd[px->idx])
				exit_fail(0, NULL, px);
			cmds += len;
		}
	}
	return (cmds);
}

static void	element_copy(char *cmds, size_t cnt, t_pipex *px)
{
	px->idx = 0;
	while (*cmds && px->idx < cnt)
	{
		if (*cmds == ' ')
		{
			px->idx++;
			while (*cmds && *cmds == ' ')
				cmds++;
		}
		cmds = elems_join(cmds, px);
	}
}

void	split_cmds(char *cmds, t_pipex *px)
{
	size_t	cnt;

	if (!cmds)
		return ;
	cnt = element_count(cmds, px);
	px->cmd = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!px->cmd)
		exit_fail(0, NULL, px);
	px->cmd[cnt + 1] = NULL;
	return (element_copy(cmds, cnt, px));
}
