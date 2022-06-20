/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:50:09 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/07 14:10:13 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	*str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int	argc, char	**argv)
{
	while (1 < argc)
		ft_putchar(argv[--argc]);
	return (0);
}
