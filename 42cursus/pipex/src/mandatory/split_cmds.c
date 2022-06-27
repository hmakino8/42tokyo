/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_cmds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:02:30 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/28 01:00:57 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static size_t	len_in_quotation_mark(char *cmds, t_pipex *px)
{
	size_t	len;

	len = 0;
	cmds++;
	while (*(cmds + len) != '\'')
		len++;
	if (!len)
	{
		while (*(cmds + len) != '"')
			len++;
	}
	printf("len = %zu\n", len);
	return (len);
}

static size_t	element_cnt(char *cmds, t_pipex *px)
{
	size_t	cnt;

	cnt = 0;
	while (*cmds)
	{
		if (*cmds == '\'')
		{
			cmds++;
			cnt++;
			while (*(cmds++) != '\'')
				;
		}
		else if (*cmds == '"')
		{
			cmds++;
			cnt++;
			while (*(cmds++) != '"')
				;
		}
		if (*cmds && *cmds++ != ' ')
		{
			cnt++;
			while (*cmds && *cmds != ' ')
				cmds++;
		}
		printf("[%s]\n", cmds);
		printf("[%zu]\n", cnt);
	}
	return (cnt);
}

static void	sub_elems(char *cmds, size_t len, t_pipex *px)
{
	if (!len)
		return ;
	px->split[px->idx] = ft_substr(cmds, 0, len);
	if (!(px->split[px->idx]))
		exit_fail(0, NULL, px);
	px->idx++;
}

static void	element_cpy(char *cmds, size_t cnt, t_pipex *px)
{
	size_t	len;

	px->idx = 0;
	while (*cmds && px->idx < cnt)
	{
		len = 0;
		if (*cmds == '\'')
		{
			cmds++;
			while (*(cmds + len) != '\'')
				len++;
			sub_elems(cmds, len, px);
			cmds += len + 1;
			len = 0;
		}
		else if (*cmds == '"')
		{
			cmds++;
			while (*(cmds + len) != '"')
				len++;
			sub_elems(cmds, len, px);
			cmds += len + 1;
			len = 0;
		}
		if (*cmds && *cmds != ' ')
		{
			while (*(cmds + len) && *(cmds + len) != ' ')
				len++;
			sub_elems(cmds, len, px);
			cmds += len;
			len = 0;
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
	printf("cnt : %zu\n", cnt);
	px->split = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!px->split)
		exit_fail(0, NULL, px);
	px->split[cnt + 1] = NULL;
	return (element_cpy(cmds, cnt, px));
}

#include <libc.h>

int	main(void)
{
	t_pipex	px;
	//char	*src = strdup("echo a b              c '[  ]' '[a b c]'  \"[ aa' bb' aa]\" z ");
	//char	*src = strdup("echo a b              c");
	//char	*src = strdup("awk '{print $1}'");
	char	*src = strdup("cat");
	int		i = -1;

	printf("***********************************************\n");
	split_cmds(src, &px);
	while (px.split[++i])
		printf("px.split[%d] : %s\n", i, px.split[i]);
	printf("************************************************\n");
	return (0);
}
