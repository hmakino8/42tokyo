/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:11:27 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:28:07 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
//#include <stdio.h>
//
//int   main(void)
//{
//	char    a[] = "abcdef";
//	char    b[] = "hmakino-42";
//	char    c[] = "";
//
//	printf("%d\n",  ft_str_is_lowercase(a));
//	printf("%d\n",  ft_str_is_lowercase(b));
//	printf("%d\n",  ft_str_is_lowercase(c));
//	return (0);
//}
