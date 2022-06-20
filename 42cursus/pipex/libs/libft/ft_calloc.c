/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:45:05 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/07 23:15:33 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s1;

	s1 = malloc(count * size);
	if (!s1)
		return (NULL);
	ft_bzero(s1, count * size);
	return (s1);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <limits.h>
//
// int main(void)
//{
//	char	*str;
//	char	*str2;
//	size_t num;
//
//	printf("SIZE_MAX = %zu\n",SIZE_MAX);
//	str = ft_calloc(0, 0);
//	str2 = calloc(UINT_MAX, 32694);
//	//ft_str = ft_calloc(UINT_MAX, UINT_MAX - 100);
//
//	if (!str)
//		printf("size = UINT_MAX * 32693  : fail\n");
//	else
//		printf("size = UINT_MAX * 32693  : success\n");
//	if (!str2)
//		printf("size = UINT_MAX * 32694  : fail\n");
//	else
//		printf("size = UINT_MAX * 32694  : success\n");
//
// return 0;
//}
