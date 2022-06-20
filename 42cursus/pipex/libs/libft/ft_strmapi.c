/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:09:42 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 20:27:19 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	if (s)
		new_s = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !new_s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
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
//	char *s2;
//	s2 = ft_strmapi(s1, f);
//	printf("%s", s2);
//}
