/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:02:57 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/02 18:32:20 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
//#include <stdio.h>
//int main(void)
//{
//	char a[] = "Hellow World";
//	printf("%d", ft_strlen(a));
//	return (0);
//}
