/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 02:32:37 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/26 19:02:43 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(char n);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_digits(x);
			write(1, " ", 1);
			ft_print_digits(y);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

void	ft_print_digits(char n)
{
	int	i;
	int	j;
	int	c;

	i = n / 10;
	j = n % 10;
	c = (char)('0' + i);
	write(1, &c, 1);
	c = (char)('0' + j);
	write(1, &c, 1);
}

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
