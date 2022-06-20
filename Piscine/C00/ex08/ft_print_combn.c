/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:23 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 09:05:44 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_scope(int *scope, int n)
{
	int	i;

	i = 0;
	while (++i < n)
		if (!(scope[i - 1] < scope[i]))
			return ;
	i = -1;
	while (++i < n)
		ft_putchar(scope[i] + '0');
	if (scope[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int	n)
{
	int	i;
	int	scope[10];

	i = -1;
	if (n > 10 || n < 0)
		return ;
	while (++i < n)
		scope[i] = i;
	while (scope[0] <= (10 - n) && n >= 1)
	{
		ft_print_scope(scope, n);
		if (n == 10)
			break ;
		scope[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (scope[i] >= 10)
			{
				scope[i - 1]++;
				scope[i] = 0;
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/
