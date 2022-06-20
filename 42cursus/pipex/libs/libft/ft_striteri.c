/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:12:25 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/10 23:12:14 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!f || !s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

//#include <stdio.h>
//
//void  f(unsigned int i, char *c)
//{
//	*c += i;
//}
//
//int main()
//{
//	char str1[] = "hdjik/,";
//	ft_striteri(str1, f);
//	printf("%s\n", str1);
//}
