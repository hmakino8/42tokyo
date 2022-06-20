/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:21:10 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:27:21 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
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
//  char    a[] = "88888888";
//  char    b[] = "hmakino-42";
//  char    c[] = "";
//
//  ft_str_is_numeric(a);
//  printf("%d\n",  ft_str_is_numeric(a));
//  printf("%d\n",  ft_str_is_numeric(b));
//  printf("%d\n",  ft_str_is_numeric(c));
//  return 0;
//}
