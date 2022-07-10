/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:08:02 by hmakino           #+#    #+#             */
/*   Updated: 2022/07/06 18:27:15 by hiroaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdbool.h>

# include "../../libs/libft/libft.h"
# include "../../libs/ft_dprintf/ft_dprintf.h"

typedef struct s_stuck {
	int				num;
	struct s_stuck	*next;
}	t_stuck;

typedef struct s_vars {
	bool	isvalid_num;
}	t_vars;

#endif
