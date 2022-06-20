/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:47:50 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/07 14:19:41 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 0;
	while (1 < argc)
	{
		ft_putchar(argv[++i]);
		--argc;
	}
	return (0);
}
