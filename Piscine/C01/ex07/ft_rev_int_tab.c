/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:44:39 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/28 17:50:12 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arry[] = {1,2,3,4,5,6,7};
//	int size = sizeof(arry) / sizeof(int);
//
//	ft_rev_int_tab(arry, size);
//
//	i = 0;
//	while (i<=6)
//	{
//		printf("%d", arry[i]);
//		i++;
//	}
//	return (0);
//}
