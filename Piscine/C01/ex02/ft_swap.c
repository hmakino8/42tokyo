/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:22:43 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/28 17:13:02 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
//#include <stdio.h>
//
//int main(void)
//{
//	int	x;
//	int	y;
//
//	x = 10;
//	y = 88;
//	ft_swap(&x , &y);
//	printf("%d, %d\n", x, y);
//	return 0;
//}
