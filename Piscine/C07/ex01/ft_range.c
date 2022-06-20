/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 03:50:47 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 15:04:31 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*num;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	num = (int *)malloc(sizeof(int) * size);
	if (num == NULL || max <= min)
		return (NULL);
	while (min < max)
		num[i++] = min++;
	return (num);
}
/*
#include<stdio.h>
int main()
{
int x,y,*num;
int i = 0,size;
printf("min=");
scanf("%d",&x);
printf("max=");
scanf("%d",&y);
num=ft_range(x,y);
size = y - x;
while (i < size)
{
printf("%d,",num[i]);
i++;
}
}
*/
