/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:51:37 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 18:11:15 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s3;

	if (s1 && s2)
		s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !s3)
		return (NULL);
	i = 0;
	while (*s1)
		s3[i++] = *s1++;
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}

//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//	printf("***********************************\n");
//	printf("%s\n", ft_strjoin("42tokyo-", "hmakino"));
//	printf("***********************************\n");
//	return (0);
//}
