/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:01:40 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/10 22:32:18 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digit_cnt(long num)
{
	size_t	digit;

	digit = 1;
	while (10 <= num)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	is_neg;
	long	num;
	char	*str;

	num = n;
	is_neg = (n < 0);
	if (is_neg)
		num = -num;
	len = digit_cnt(num) + is_neg;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (is_neg < len--)
	{
		str[len] = (char)(num % 10 + '0');
		num /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

//#include <limits.h>
//#include <stdio.h>
//
//int main(void)
//{
//	printf("INT_MAX : %s\n", ft_itoa(INT_MAX));
//	printf("INT_MIN : %s\n", ft_itoa(INT_MIN));
//	printf("0       : %s", ft_itoa(0));
//	return (0);
// }
