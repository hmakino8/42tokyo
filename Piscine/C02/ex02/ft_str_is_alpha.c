/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:23:05 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:26:39 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z')
			|| ('a' <= str[i] && str[i] <= 'z'))
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
//int	main(void)
//{
//	char	a[] = "hmakino";
//	char	b[] = "hmakino-42";
//	char	c[] = "";
//
//	printf("%d\n",  ft_str_is_alpha(a));
//	printf("%d\n",  ft_str_is_alpha(b));
//	printf("%d\n",  ft_str_is_alpha(c));
//
//	return 0;
//}
