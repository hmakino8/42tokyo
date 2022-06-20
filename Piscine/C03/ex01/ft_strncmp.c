/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:47:37 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/02 16:53:16 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((int)s1[i] - (int)s2[i]);
}
//#include <stdio.h>
//int   main(void)
//{
//	unsigned int n;
//	char x[] = "ABC";
//	char y[] = "ABD";
//
//	n = 3;
//	printf("%d", ft_strncmp(x, y, n));
//	return (0);
//}
