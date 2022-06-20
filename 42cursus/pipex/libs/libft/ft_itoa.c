/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:01:40 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 03:34:06 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digit_cnt(long ln)
{
	size_t	digit;

	digit = 1;
	while (10 <= ln)
	{
		ln /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	isneg;
	long	ln;
	char	*ret;

	ln = (long)n;
	isneg = (ln < 0);
	if (isneg)
		ln *= -1;
	len = digit_cnt(ln) + isneg;
	ret = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	while (isneg < len--)
	{
		ret[len] = (char)(ln % 10 + '0');
		ln /= 10;
	}
	if (isneg)
		ret[0] = '-';
	return (ret);
}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("INT_MAX : %s\n", ft_itoa(INT_MAX));
//	printf("INT_MIN : %s\n", ft_itoa(INT_MIN));
//	printf("0       : %s", ft_itoa(0));
//	return (0);
// }
