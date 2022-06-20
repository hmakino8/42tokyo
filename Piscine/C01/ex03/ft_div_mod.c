/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:25:51 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/28 17:29:10 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//#include<stdio.h>
//
//int main(void)
//{
//	int c = 69;
//	int d = 8;
//	int e;
//	int f;
//	
//	ft_div_mod(c, d, &e, &f);
//	printf("%d, %d",e ,f);
//	return 0;
//}
