/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:48:13 by hiroaki           #+#    #+#             */
/*   Updated: 2022/07/02 12:41:13 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_gnl(const char *lmt, const char *gnl)
{
	const unsigned char	*ulmt;
	const unsigned char	*ugnl;

	ulmt = (const unsigned char *)lmt;
	ugnl = (const unsigned char *)gnl;
	while (1)
	{
		if (!*ulmt && *ugnl == '\n')
			break ;
		if (*ulmt != *ugnl)
			return (*ulmt - *ugnl);
		ulmt++;
		ugnl++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char s1[] = "42tokyo-A-hmakino";
//	char s2[] = "42tokyo-C";
//	char s3[] = "";
//
//	printf("***********************************\n");
//	printf("strcmp    : %d\n", strcmp(s1, s2));
//	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp(s2, s2));
//	printf("ft_strcmp : %d\n", ft_strcmp(s2, s2));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp(s2, s1));
//	printf("ft_strcmp : %d\n", ft_strcmp(s2, s1));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp(s3, s3));
//	printf("ft_strcmp : %d\n", ft_strcmp(s3, s3));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp("a", "a"));
//	printf("ft_strcmp : %d\n", ft_strcmp("a", "a"));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp("Tripouille", "TripouilleX"));
//	printf("ft_strcmp    : %d\n", ft_strcmp("Tripouille", "TripouilleX"));
//	printf("-----------------------------------\n");
//	printf("strcmp    : %d\n", strcmp("Tripouille", "Tripouill"));
//	printf("ft_strcmp    : %d\n", ft_strcmp("Tripouille", "Tripouill"));
//	printf("***********************************\n");
//	return (0);
//}
