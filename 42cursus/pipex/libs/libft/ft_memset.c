/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:47:36 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 16:57:36 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t	len)
{
	while (len--)
		*(unsigned char *)(b + len) = (unsigned char)c;
	return (b);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char	array[] = "xxxxxxxxxxxxxxxx";
//	char	array2[] = "xxxxxxxxxxxxxxxx";
//	char	*s1;
//	char	*s2;
//
//	printf("***********************************\n");
//	s1 = memset(array, '!', 7);
//	s2 = ft_memset(array2, '!', 7);
//	printf("memset    : %s\n", s1);
//	printf("ft_memset : %s\n", s2);
//	printf("***********************************\n");
//	return 0;
//}
