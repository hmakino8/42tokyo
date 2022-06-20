/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:33:46 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/20 04:20:47 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s || (!*s && !uc))
	{
		if (*s == uc)
			return ((char *)s);
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
//	printf("strchr    : %s\n", strchr(array, 'H'));
//	printf("ft_strchr : %s\n", ft_strchr(array, 'H'));
//	printf("-----------------------------------\n");
//	printf("strchr    : %s\n", strchr(array, 'A'));
//	printf("ft_strchr : %s\n", ft_strchr(array, 'A'));
//	printf("-----------------------------------\n");
//	printf("strchr    : %s\n", strchr(array, '\0'));
//	printf("ft_strchr : %s\n", ft_strchr(array, '\0'));
//	printf("***********************************\n");
//	return 0;
//}
