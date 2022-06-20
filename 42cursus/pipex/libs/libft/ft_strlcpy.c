/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:47:59 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/10 23:16:17 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	while (src[idx] && idx + 1 < dstsize)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize)
		dst[idx] = '\0';
	return (ft_strlen(src));
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	size_t	len;
//	char	dst[] = "42tokyo-hmakino-42tokyo";
//
//	printf("***********************************\n");
//	len = strlcpy(dst, "makino", sizeof(dst));
//	printf("strlcpy       : %s   len = %lu\n", dst, len);
//	strlcpy(dst, "42tokyo-hmakino-42tokyo", 24);
//	len = ft_strlcpy(dst, "makino", sizeof(dst));
//	printf("ft_strlcpy    : %s   len = %lu\n", dst, len);
//	printf("------------------------------------\n");
//	len = strlcpy(dst, "", 0);
//	printf("strlcpy       : %s   len = %lu\n", dst, len);
//	strlcpy(dst, "42tokyo-hmakino-42tokyo", 24);
//	len = ft_strlcpy(dst, "", 0);
//	printf("ft_strlcpy    : %s   len = %lu\n", dst, len);
//	printf("------------------------------------\n");
//	len = strlcpy(dst, "42tokyo-hmakino-42tokyo42tokyo-hmakino-42tokyo", 0);
//	printf("strlcpy       : %s   len = %lu\n", dst, len);
//	strlcpy(dst, "42tokyo-hmakino-42tokyo", 24);
//	len = ft_strlcpy(dst, "42tokyo-hmakino-42tokyo42tokyo-hmakino-42tokyo", 0);
//	printf("ft_strlcpy    : %s   len = %lu\n", dst, len);
//	printf("***********************************\n");
//
//	return (0);
//}
