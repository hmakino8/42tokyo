/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:09:42 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 06:56:40 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	slen;
	char	*ret;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = ft_strlen(s);
	ret = (char *)malloc(slen + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

//#include <stdio.h>
//
//char f(unsigned int i, char c)
//{
//	return (c += i);
//}
//
//int main()
//{
//	char s1[] = "hdjik/,";
//	char *ret;
//
//	ret = ft_strmapi(s1, &f);
//	printf("%s\n", ret);
//}
