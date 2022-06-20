/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:20:28 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:28:58 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
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
//	char    a[] = "abhjk";
//	char    b[] = "hmakino-42";
//	char    c[] = "";
//
//	printf("%d\n",  ft_str_is_printable(a));
//	printf("%d\n",  ft_str_is_printable(b));
//	printf("%d\n",  ft_str_is_printable(c));
//	return 0;
//}
