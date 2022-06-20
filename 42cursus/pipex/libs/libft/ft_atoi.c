/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:44:45 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/08 04:23:23 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	long_overflow(const char *str, long num, size_t digit, size_t is_neg)
{
	long	check;

	check = LONG_MAX / 10;
	if (digit <= 19 && check <= num)
	{
		if (digit == 19 && check == num && \
			((is_neg && str[18] <= 8) || (!is_neg && str[18] <= 7)))
			return (1);
		if (is_neg)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	digit;
	size_t	is_neg;
	long	num;

	i = 0;
	digit = 0;
	num = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	is_neg = (str[i] == '-');
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i + digit]) && digit < 18)
		num = (num * 10) + (str[i + digit++] - '0');
	if (digit == 18 && long_overflow(&str[i], num, digit, is_neg) <= 0)
		return (long_overflow(&str[i], num, digit, is_neg));
	if (is_neg)
		return ((int)num * -1);
	return ((int)num);
}

//#include <stdio.h>
//#include <limits.h>
//
//int main(void)
//{
//	printf("***********************************\n");
//	printf("tab return\natoi    : %d\n", atoi("\t\r-1"));
//	printf("ft_atoi : %d\n", ft_atoi("\t\r-1"));
//	printf("-----------------------------------\n");
//	printf("2008295118\natoi    : %d\n", atoi("2008295118"));
//	printf("ft_atoi : %d\n", ft_atoi("2008295118"));
//	printf("-----------------------------------\n");
//	printf("INT_MAX + 1\natoi    :%d\n", atoi("2147483648"));
//	printf("ft_atoi :%d\n", ft_atoi("2147483648"));
//	printf("-----------------------------------\n");
//	printf("INT_MIN - 1\natoi    :%d\n", atoi("-2147483648"));
//	printf("ft_atoi :%d\n", ft_atoi("-2147483648"));
//	printf("-----------------------------------\n");
//	printf("LONG_MAX + 1\natoi    :%d\n", atoi("9223372036854775808"));
//	printf("ft_atoi :%d\n", ft_atoi("9223372036854775808"));
//	printf("-----------------------------------\n");
//	printf("LONG_MIN - 1\natoi    :%d\n", atoi("-9223372036854775809"));
//	printf("ft_atoi :%d\n", ft_atoi("-9223372036854775809"));
//	printf("-----------------------------------\n");
//	printf("+10200*304\natoi    :%d\n", atoi("+10200*304"));
//	printf("ft_atoi :%d\n", ft_atoi("+10200*304"));
//	printf("***********************************\n");
//
//	return (0);
//}
