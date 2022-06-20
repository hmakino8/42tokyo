/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:45:05 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 09:40:14 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	alloc_size;
	void	*s1;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	alloc_size = count * size;
	if (alloc_size == 0)
		alloc_size = 1;
	s1 = malloc(alloc_size);
	if (!s1)
		return (NULL);
	ft_bzero(s1, alloc_size);
	return (s1);
}
