/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr            +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:41 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/19 05:56:22 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	**free_element(char **s, size_t cnt)
{
	size_t	i;

	i = 0;
	while (i < cnt)
	{
		free(s[i]);
		s[i++] = NULL;
	}
	free(s);
	return (NULL);
}

static char	*skip_space(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == ' ')
		i++;
	return (&s[i]);
}

static char	*split_before_space(char *s, size_t locate_space)
{
	return (ft_substr(s, 0, locate_space));
}

static char	*split_after_space(char *s, size_t locate_space)
{
	s = skip_space(&s[locate_space]);
	return (ft_substr(s, 0, ft_strlen(s)));
}

char	**split_cmd_op(char *s)
{
	char	**split;
	char	*flag_space;
	int		locate_space;

	if (!s)
		return (NULL);
	flag_space = ft_strchr(s, ' ');
	if (!flag_space)
		return NULL;
	locate_space = flag_space  - s;
	split = (char **)malloc(sizeof(char *) * 3);
	if (!split)
		return (NULL);
	split[0] = split_before_space(s, locate_space);
	if (split[0] == NULL)
		return (free_element(split, 1));
	split[1] = split_after_space(s, locate_space);
	if (split[1] == NULL)
		return (free_element(split, 2));
	split[2] = NULL;
	return (split);
}

//#include <stdio.h>
//
//int main(void)
//{
//	char **split;
//	char src[] = "awk '{print $2}'";
//	char delimiter = ' ';
//	int	i = 0;
//
//	printf("***********************************************\n");
//	split = split_cmd_op(src);
//	printf("split[0] : [%s]\n", split[0]);
//	printf("split[0]len : %zu\n", ft_strlen(split[0]));
//	printf("split[1] : [%s]\n", split[1]);
//	printf("split[1]len : %zu\n", ft_strlen(split[1]));
//	printf("split[2] : %s\n", split[2]);
//	printf("************************************************\n");
//	return 0;
//}
