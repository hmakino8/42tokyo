/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:46:00 by hmakino           #+#    #+#             */
/*   Updated: 2022/03/09 20:55:16 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	if (ft_strlen(haystack) < len)
		len = ft_strlen(haystack);
	i = 0;
	while (haystack[i] && len)
	{
		j = 0;
		while (haystack[i] && haystack[i + j] == needle[j] && i + j <= len - 1)
		{
			if (!needle[++j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char array1[] = "42tokyo-hmakino-42tokyo";
//	char array2[] = "";
//	char array3[] = "makino";
//	char array4[] = "makino-hiroaki";
//	char array5[] = "42tokyo-hmakino-42tokyo42tokyo-hmakino-42tokyo";
//	char haystack[30] = "aaabcabcd";
//	char needle[10] = "aabc";
//
//	printf("***********************************\n");
//	printf("strnstr    : %s\n", strnstr(array1, array2, 15));
//	printf("ft_strnstr : %s\n", ft_strnstr(array1, array2, 15));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr(array1, array1, 15));
//	printf("ft_strnstr : %s\n", ft_strnstr(array1, array1, 15));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr(array1, array3, 15));
//	printf("ft_strnstr : %s\n", ft_strnstr(array1, array3, 15));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr(array1, array3, 14));
//	printf("ft_strnstr : %s\n", ft_strnstr(array1, array3, 14));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr(array1, array5, 23));
//	printf("ft_strnstr : %s\n", ft_strnstr(array1, array5, 23));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr(haystack, needle, -1));
//	printf("ft_strnstr : %s\n", ft_strnstr(haystack, needle, -1));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr("1", "a", 1));
//	printf("ft_strnstr : %s\n", ft_strnstr("1", "a", 1));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr("22", "b", 2));
//	printf("ft_strnstr : %s\n", ft_strnstr("22", "b", 2));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr("", "coucou", -1));
//	printf("ft_strnstr : %s\n", ft_strnstr("", "coucou", -1));
//	printf("-----------------------------------\n");
//	printf("strnstr    : %s\n", strnstr("123456789", "9", 8));
//	printf("ft_strnstr : %s\n", ft_strnstr("123456789", "9", 8));
//	printf("***********************************\n");
//
//	return (0);
//}
