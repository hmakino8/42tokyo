/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:46:00 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/20 13:03:37 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * -1;
	}
	else
		num = nb;
	if (10 <= num)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct	s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
