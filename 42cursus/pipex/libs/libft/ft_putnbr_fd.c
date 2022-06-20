/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:54:21 by hmakino           #+#    #+#             */
/*   Updated: 2022/03/10 22:42:54 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = -n;
		ft_putchar_fd('-', fd);
	}
	else
		num = n;
	if (10 <= num)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((char)(num % 10 + '0'), fd);
}

//#include <stdio.h>
//#include <string.h>
//#include <fcntl.h>
//#include <limits.h>
//
//int main(void)
//{
//	const char* filename = "42tokyo.txt";
//
//	int fd = open(filename, O_WRONLY);
//	if (fd == -1) {
//		perror("open");
//		exit(EXIT_FAILURE);
//	}
//
//	ft_putnbr_fd(INT_MAX, fd);
//	ft_putchar_fd('\n', fd);
//	ft_putnbr_fd(INT_MIN, fd);
//
//	close(fd);
//	exit(EXIT_SUCCESS);
//}
