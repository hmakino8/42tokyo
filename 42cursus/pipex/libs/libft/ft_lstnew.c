/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:03:48 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/09 21:58:49 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node_new;

	node_new = (t_list *)malloc(sizeof(t_list));
	if (!node_new)
		return (NULL);
	node_new->content = content;
	node_new->next = NULL;
	return (node_new);
}

//#include <stdio.h>
//
//int main(void)
//{
//	t_list	*node_new;
//
//	node_new = ft_lstnew("hmakino");
//	printf("\nnode_new->content : %s\n", (char *)node_new->content);
//}
