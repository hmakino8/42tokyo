/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:58:04 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/28 18:00:07 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i != 0)
			{
				i -= 2;
			}
		}
		i++;
	}
}
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int arry[] = {8, 9, 7, 2, 1, 3}; 
//	int size = sizeof(arry) / sizeof(int);
//	
//	ft_sort_int_tab(arry, size);
//
//	i = 0;
//	while (i<=5)
//	{
//		printf("%d", arry[i]);
//		i++;
//	}
//	return 0;
//}
