/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:43:24 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/06 11:21:05 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int	nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int	ft_is_prime(int	nb)
{
	int	i;
	int	half_nb;

	i = 2;
	half_nb = nb / 2;
	while ((i * 2 - 1) <= half_nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{	
    printf("1999999973 : %d\n", ft_find_next_prime(1999999973));
	printf("3          : %d\n", ft_find_next_prime(3));
	printf("2          : %d\n", ft_find_next_prime(2));
	printf("1          : %d\n", ft_find_next_prime(1));
	printf("0          : %d\n", ft_find_next_prime(0));
	printf("-1         : %d\n", ft_find_next_prime(-1));
    return (0);
}
*/
