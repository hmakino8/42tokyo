/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr            +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:41 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/19 06:32:12 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_all_element(char **s, size_t i)
{
	size_t	j;

	j = 0;
	while (j <= i)
	{
		free(s[j]);
		s[j++] = NULL;
	}
	free(s);
	return (NULL);
}

char	**element_cpy(char const *s, char **split, char c, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s && i < n)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*(s + len) && *(s + len) != c)
			len++;
		if (len)
		{
			split[i] = ft_substr(s, 0, len);
			if (!(split[i]))
				return (free_all_element(&split[i], i));
			i++;
		}
		s += len;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_nsplit(char const *s, char c, size_t n)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((n + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (element_cpy(s, split, c, n));
}
