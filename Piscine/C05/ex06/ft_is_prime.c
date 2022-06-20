/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:13:53 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/05 14:03:30 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
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
    printf("1999999973 : %d\n", ft_is_prime(1999999973));
    printf("3          : %d\n", ft_is_prime(3));
    printf("2          : %d\n", ft_is_prime(2));
    printf("1          : %d\n", ft_is_prime(1));
    printf("0          : %d\n", ft_is_prime(0));
    printf("-1         : %d\n", ft_is_prime(-1));	
	return (0);
}
*/
