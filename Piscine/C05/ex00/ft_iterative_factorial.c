/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:22:04 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/04 21:34:44 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (0 < nb)
	{
		while (0 < nb)
		{
			ans *= nb;
			nb--;
		}
	}
	return (ans);
}
/*
#include <stdio.h>
int main(void)
{
	int num = 7;
	printf("%d", ft_iterative_factorial(num));
	return (0);
}
*/
