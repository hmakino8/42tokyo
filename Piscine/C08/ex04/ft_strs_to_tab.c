/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:10:46 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/10 15:10:48 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	char	*strlen;
	int		i;

	strlen = str;
	i = 0;
	while (strlen[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	char	*srclen;
	char	*dest;
	char	*tmp;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	srclen = src;
	tmp = dest;
	while (*srclen)
		*tmp++ = *srclen++;
	*tmp = '\0';
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	int			i;
	t_stock_str	*strinfo;

	i = 0;
	strinfo = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strinfo)
		return (0);
	while (i < ac)
	{
		strinfo[i].size = ft_strlen(av[i]);
		strinfo[i].str = av[i];
		strinfo[i].copy = ft_strdup(av[i]);
		i++;
	}
	strinfo[i].str = 0;
	return (strinfo);
}
