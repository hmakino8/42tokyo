/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:50:49 by hmakino           #+#    #+#             */
/*   Updated: 2022/06/26 09:18:13 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *find_separater(int ac, char **av)
{
	int locate;

	locate = (ac - 1) / 2 + 1;
	return (av[index_asc_order(locate)]);
}

int main(int ac, char **av)
{
	// t_pswap	ps;

	find_separater();
	return (0);
}
