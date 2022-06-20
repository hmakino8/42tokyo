/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:19:33 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/02 18:36:32 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_minimum(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 < nb && nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb == -2147483648)
	{
		ft_putnbr_minimum();
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (0 <= nb && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr_minimum(void)
{
	write(1, "-2147483648", 11);
}

//int	main(void)
//{
//	ft_putnbr(-2147483648);
//	return (0);
//}
