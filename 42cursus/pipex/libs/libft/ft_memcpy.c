/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:46:53 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 16:01:08 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	if (!dst && !src)
		return (NULL);
	index = 0;
	while (index < n)
	{
		*(char *)(dst + index) = *(char *)(src + index);
		index++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
//	char	src[] = "test basic du memcpy !";
//	char	buf[22];
//	char	buf2[22];
//
// 	printf("***********************************\n");
//	memcpy(NULL, NULL, 1);
//	printf("memcpy    : %s\n", buf);
//	ft_memcpy(NULL, NULL, 1);
//	printf("ft_memcpy : %s\n", buf2);
// 	printf("***********************************\n");
// 	return 0;
// }
