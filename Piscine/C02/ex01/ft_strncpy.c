/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:58:54 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/01 00:18:39 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//
//int	main(void)
//{
//	unsigned int n;
//	char a[] = "xxxxxxx-42tokyo";
//	char b[] = "hmakino";
//
//	n = 7;
//	ft_strncpy(a, b, n);
//	printf("%s\n", a);
//	return 0;
//}
