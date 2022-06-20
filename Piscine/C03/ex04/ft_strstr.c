/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:11 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/02 22:16:04 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_strcmp(char *s1, char *s2, int j)
{
	int	i;

	i = 0;
	while (s2[i + 1] != '\0' && s1[j] == s2[i])
	{
		i++;
		j++;
	}
	return ((int)s1[j] - (int)s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	d;

	i = 0;
	if (len(str) < len(to_find))
		return (0);
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i] != '\0' )
	{
		if (str[i] == to_find[0])
		{
			d = i;
			if (ft_strcmp(str, to_find, d) == 0)
				return (&str[d]);
		}
		i++;
	}
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//    char s1[] = "abcdefghijkdenlmn";
//    char s2[] = "den";
//    char s3[] = "xyz";
//    char s4[] = "abcdefghijklmnopqr";
//    char s5[] = "";
//    char *sp;
//
//    sp = strstr(s1, s2);
//    printf("   match : %s\n", sp);
//    sp = ft_strstr(s1, s2);
//    printf("ft:match : %s\n", sp);
//
//    sp = strstr(s1, s3);
//    printf("   not match : %s\n", sp);
//    sp = ft_strstr(s1, s3);
//    printf("ft:not match : %s\n", sp);
//
//    sp = strstr(s1, s4);
//    printf("   not : %s\n", sp);
//    sp = ft_strstr(s1, s4);
//    printf("ft:not : %s\n", sp);
//
//    sp = strstr(s1, s5);
//    printf("   \\0 : %s\n", sp);
//    sp = ft_strstr(s1, s5);
//    printf("ft:\\0 : %s\n", sp);
//
//    return 0;
//}
