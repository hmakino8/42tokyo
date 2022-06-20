/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:16:20 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:00:00 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (str[i] == '\0')
			{
				i++;
			}
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
//	char	a[] = "ABCDEFG";
//	char	b[] = "hmakino-42";
//	char	c[] = "";
//
//	printf("%d\n",  ft_str_is_uppercase(a));
//	printf("%d\n",  ft_str_is_uppercase(b));
//	printf("%d\n",  ft_str_is_uppercase(c));
//	return 0;
//}
