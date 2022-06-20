/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:23:52 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/03 14:49:50 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*s1;
	char	*s2;

	s1 = dest;
	s2 = src;
	while (*s1)
		s1++;
	while (nb && *s2)
	{
		nb--;
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (dest);
}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[20] = "ABC";
//    char str2[] = "12345";
//    char ft_str[20] = "ABC";
//
//    char *result1 = strncat(str1, str2, 3);
//    printf("%s: %s\n", str1, result1);
//    char *ft_result1 = ft_strncat(ft_str, str2, 3);
//    printf("%s: %s\n", ft_str, ft_result1);
//
//    char *result2 = strncat(str1, str2, 10);
//    printf("%s: %s\n", str1, result2);
//    char *ft_result2 = ft_strncat(ft_str, str2, 10);
//    printf("%s: %s\n", ft_str, ft_result2);
//
//    return 0;
//}
