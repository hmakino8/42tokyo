/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:14:06 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 15:06:03 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num;
	int	size;
	int	i;

	i = 0;
	if (max <= min)
	{
		num = NULL;
		return (0);
	}
	size = max - min;
	num = (int *)malloc(sizeof(int) * size);
	if (num == NULL)
	{
		*range = num;
		return (-1);
	}
	while (min < max)
		num[i++] = min++;
	*range = num;
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
    int i;
    int *deta;
    int min = 0;
    int max = 10;
    int size = ft_ultimate_range(&deta, min, max);

    i = 0;
    printf("size = %d\n", size);
    while (i < max - min)
    {
        printf("%d\n",deta[i]);
        i++;
    }
    return (0);
}
*/
