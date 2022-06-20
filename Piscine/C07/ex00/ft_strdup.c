/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:26:38 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 15:03:12 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int		i;
	char	*d;

	i = 0;
	d = dest;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d);
}

char	*ft_strdup(char *src)
{
	char	*s;

	if (src == '\0')
		return (NULL);
	s = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (s == NULL)
		return (0);
	return (ft_strcpy(s, src));
}
/*
#include<stdio.h>
int	main(void)
{
	char	a[] = "abcdefghi";
	printf("%s",  ft_strdup(a));
	return (0);
}
*/
