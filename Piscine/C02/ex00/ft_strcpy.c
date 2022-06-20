/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino </var/mail/hmakino>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:29:05 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/30 23:53:15 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
//#include <stdio.h>
//
//int main(void)
//{
//	char a[] = "empty-arry";
//	char b[] = "hmakino";
//	
//	 printf("%s\n",a);
//	 printf("%s\n",b);
//	ft_strcpy(a, b);
//	printf("%s\n", a);
//	return 0;
//}
