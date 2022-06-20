/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:18:07 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/28 17:32:54 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
//#include <stdio.h>
//
//int main(void)
//{
//	int x = 69;
//	int y = 7;
//
//	ft_ultimate_div_mod(&x, &y);
//	printf("%d, %d", x, y);
//	return 0;
//}
