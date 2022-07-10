/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:50:49 by hmakino           #+#    #+#             */
/*   Updated: 2022/07/07 21:52:32 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	case_two_elems(int *nums)
{
	if (nums[0] == nums[1])
		exit(EXIT_FAILURE);
	if (nums[0] < nums[1])
		exit(EXIT_SUCCESS);
	ft_dprintf(1, "sa\n");
}

void	case_three_elems(int *nums) //0 2 0
{
	if (nums[0] == nums[1] || nums[1] == nums[2] || \
		nums[2] == nums[0])
		exit(EXIT_FAILURE);
	if (nums[0] <= nums[1])
	{
		if (nums[1] <= nums[2])
			exit(EXIT_SUCCESS);

	}
}

void	case_three_or_less_elem(int elem_cnt, char **elems, t_vars *v)
{
	int	i;
	int	nums[2];

	if (elem_cnt == 1)
		exit(EXIT_SUCCESS);
	i = -1;
	while (++i < elem_cnt)
	{
		nums[i] = ft_atoi(elems[i], &v->isvalid_num);
		if (!v->isvalid_num)
			exit(EXIT_FAILURE);
	}
	if (elem_cnt == 2)
		case_two_elems(nums);
	if (elem_cnt == 3)
		case_three_elems(nums);
}

void	check_arg(int ac, char **av, t_vars *v)
{
	if (!v->isvalid_num)
		dprintf(2, "Error\n");
	if (!v->isvalid_num || !av || ac == 1)
		exit(EXIT_FAILURE);
	if (ac <= 4)
		case_three_or_less_elem(ac - 1, &av[1], &v);
}

t_stuck	*node_new(int num)
{
	t_stuck	*new;

	new = (t_stuck *)malloc(sizeof(t_stuck));
	new->num = num;
	new->next = NULL;
	return (new);
}

t_stuck	*push_last(t_stuck *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

void	push_back(t_stuck **lst, t_stuck *new)
{
	t_stuck	*second_last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	second_last = push_last(*lst);
	second_last->next = new;
}

t_stuck	*creat_stack(int ac, char **av)
{
	t_stuck	*tmp;
	t_stuck	*stack;
	int		i;
	int		num;
	bool	isvalid_num;

	i = 0;
	tmp = stack;
	while (++i < ac)
	{
		num = ft_atoi(av[i], &isvalid_num);
		check_arg(ac, av, isvalid_num);
		tmp = node_new(num);
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	return (stack);
}

void	init_vars(t_vars *v)
{
	v->isvalid_num = true;
}

int	main(int ac, char **av)
{
	t_stuck	*stack_a;
	t_vars	v;

	init_vars(&v);
	check_arg(ac, av, &v);
	stack_a = creat_stack(ac, av);
	printf("%d\n", stack_a->num);
	return (0);
}
