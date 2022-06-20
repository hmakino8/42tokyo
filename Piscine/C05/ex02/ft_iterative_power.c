/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:06:55 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/05 01:48:09 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	exp;
	int	i;

	exp = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{	
		while (power > 0)
		{
			exp *= nb;
			power--;
		}
	}
	return (exp);
}
/*
#include <stdio.h>
int main(void)
{
  int num = 3;
  int power = 4;
  printf("%d", ft_iterative_power(num, power));
  return (0);
}
*/
