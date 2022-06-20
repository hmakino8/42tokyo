/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:46:41 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 02:28:36 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(const unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char	array[] = "Hello 42!";
//
//	printf("***********************************\n");
//	printf("memchr    : %s\n", (char *)memchr(array, '4', 7));
//	printf("ft_memchr : %s\n", (char *)ft_memchr(array,'4', 7));
//	printf("-----------------------------------\n");
//	printf("memchr    : %s\n", (char *)memchr(array, 'o', 5));
//	printf("ft_memchr : %s\n", (char *)ft_memchr(array, 'o', 5));
//	printf("***********************************");
//	return 0;
//}
