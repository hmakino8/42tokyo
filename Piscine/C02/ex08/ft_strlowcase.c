/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:24:07 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:21:25 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
//#include <stdio.h>
//
//int   main(void)
//{
//	int i = 0;
//	char    a[] = "ABCDefg";
//	char    b[] = "";
//
//	ft_strlowcase(a);
//	ft_strlowcase(b);
//	while (a[i] != '\0')
//	{
//		i++;
//	}
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return (0);
//}
