/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:48:13 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/11 00:24:04 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((const unsigned char)s1[i] != (const unsigned char)s2[i])
			return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
		if (!s1[i] || !s2[i])
			break ;
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char  s1[] = "42tokyo-A-hmakino";
//	char  s2[] = "42tokyo-C";
//	char  s3[] = "";
//
//	printf("***********************************\n");
//	printf("strncmp    : %d\n", strncmp(s1, s2, sizeof(s1)));
//	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, sizeof(s1)));
//	printf("-----------------------------------\n");
//	printf("strncmp    : %d\n", strncmp(s2, s2, sizeof(s1)));
//	printf("ft_strncmp : %d\n", ft_strncmp(s2, s2, sizeof(s1)));
//	printf("-----------------------------------\n");
//	printf("strncmp    : %d\n", strncmp(s2, s1, 8));
//	printf("ft_strncmp : %d\n", ft_strncmp(s2, s1, 8));
//	printf("-----------------------------------\n");
//	printf("strncmp    : %d\n", strncmp(s3, s3, sizeof(s1)));
//	printf("ft_strncmp : %d\n", ft_strncmp(s3, s3, sizeof(s1)));
//	printf("-----------------------------------\n");
//	printf("strncmp    : %d\n", strncmp("Tripouille", "TripouilleX", 42));
//	printf("ft_strncmp    : %d\n", ft_strncmp("Tripouille", "TripouilleX", 42));
//	printf("-----------------------------------\n");
//	printf("strncmp    : %d\n", strncmp("Tripouille", "Tripouill", 42));
//	printf("ft_strncmp    : %d\n", ft_strncmp("Tripouille", "Tripouill", 42));
//	printf("***********************************\n");
//
//	return 0;
//}
