/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:31:02 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/04 21:55:15 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb *= ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main(void)
{
	int num = 10;
	printf("%d", ft_recursive_factorial(num));
	return (0);
}
*/
