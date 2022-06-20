/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:27:00 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 18:34:03 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	add;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (dstsize + len_s);
	add = (dstsize - 1) - len_d;
	if (add <= len_s)
		ft_strlcpy(&dst[len_d], src, add + 1);
	else
		ft_strlcpy(&dst[len_d], src, len_s + 1);
	return (len_d + len_s);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char array1[16] = "42tokyo-h";
//	char array2[16] = "42tokyo-h";
//	char array3[] = "makino";
//
//	printf("***********************************\n");
//	strlcat(array1, "makino", sizeof(array1));
//	ft_strlcat(array2, "makino", sizeof(array2));
//	printf("strlcat       : %s\n", array1);
//	printf("ft_strlcat    : %s\n", array2);
//	printf("***********************************\n");
//	return (0);
//}
