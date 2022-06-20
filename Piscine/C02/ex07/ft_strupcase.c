/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:22:02 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:20:58 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] -= 32;
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
//	char    a[] = "abcdefg";
//	char	b[] = "";
//
//	ft_strupcase(a);
//	while (a[i] != '\0')
//	{
//		i++;
//	}
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return (0);
//}
