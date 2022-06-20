/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:00:14 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/02 16:36:34 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((int)s1[i] - (int)s2[i]);
}
//#include <stdio.h>
//int	main(void)
//{
//	char x[] = "Hellow world";
//	char y[] = "Hellow 42";
//	
//	printf("%d", ft_strcmp(x, y));
//	return (0);
//}
