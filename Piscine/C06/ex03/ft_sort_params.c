/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:25:45 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 00:13:56 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	output(int	size, char	**args)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (args[i][j])
		{
			ft_putchar(args[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	if (argc == 1)
		return (1);
	while ((++i) < argc)
	{
		j = i;
		while ((++j) < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}
	output(argc, argv);
	return (0);
}
