/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:44:45 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 10:14:20 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

static int	ft_isnegative(int c)
{
	return (c == '-');
}

static int	overflow(long num, int sign)
{
	if ((sign > 0 && num > INT_MAX) || (sign < 0 && -num < INT_MIN))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (ft_isnegative(*str))
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str++ - '0');
		if (overflow(num, sign))
		{
			if (sign > 0)
				return (INT_MAX);
			return (INT_MIN);
		}
	}
	return ((int)num * sign);
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
//	printf("INT_MAX\natoi    :%d\n", atoi("2147483647"));
//	printf("ft_atoi :%d\n", ft_atoi("2147483647"));
//	printf("-----------------------------------\n");
//	printf("INT_MIN\natoi    :%d\n", atoi("-2147483648"));
//	printf("ft_atoi :%d\n", ft_atoi("-2147483648"));
//	printf("-----------------------------------\n");
//	printf("INT_MAX + 1\natoi    :%d\n", atoi("2147483648"));
//	printf("ft_atoi :%d\n", ft_atoi("2147483648"));
//	printf("-----------------------------------\n");
//	printf("INT_MIN - 1\natoi    :%d\n", atoi("-2147483649"));
//	printf("ft_atoi :%d\n", ft_atoi("-2147483649"));
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
