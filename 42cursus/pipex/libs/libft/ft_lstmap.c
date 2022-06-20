/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:09:31 by hmakino           #+#    #+#             */
/*   Updated: 2022/03/10 22:34:08 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*lst_new;

	if (!lst)
		return (NULL);
	first_node = NULL;
	while (lst)
	{
		lst_new = ft_lstnew((*f)(lst->content));
		if (!lst_new)
		{
			ft_lstclear(&first_node, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first_node, lst_new);
		lst = lst->next;
	}
	return (first_node);
}
