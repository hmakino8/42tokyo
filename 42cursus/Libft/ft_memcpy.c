/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:46:53 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 06:53:49 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
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
//	memcpy(buf, src, 14);
//	printf("memcpy    : [%s]\n", buf);
//	ft_memcpy(buf2, src, 14);
//	printf("ft_memcpy    : [%s]\n", buf2);
// 	printf("***********************************\n");
// 	return 0;
// }
