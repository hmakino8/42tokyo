/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:57:09 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 17:43:32 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

// #include <stdio.h>
// #include <string.h>
// #include <fcntl.h>
//
// int main(void)
// {
//     char* filename = "42tokyo.txt";
//
//     int fd = open(filename, O_WRONLY);
//     if (fd == -1) {
//         perror("open");
//         exit(EXIT_FAILURE);
//     }
//
//     ft_putstr_fd(filename, fd);
//
//     close(fd);
//     exit(EXIT_SUCCESS);
// }
