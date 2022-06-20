/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:47:59 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 09:35:35 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dstsize)
		return (slen);
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	char	dst[] = "42tokyo-";
//	char	dst2[] = "42tokyo-";
//
//	printf("***********************************\n");
//	printf("original len: %zu\n", strlcpy(dst, "hmakino", 8));
//	printf("ft len: %zu\n", ft_strlcpy(dst2, "hmakino", 8));
//	printf("original dst: %s\n", dst);
//	printf("ft dst: %s\n", dst2);
//	printf("***********************************\n");
//
//	return (0);
//}
