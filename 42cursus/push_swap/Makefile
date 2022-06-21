#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 05:02:19 by hmakino           #+#    #+#              #
#    Updated: 2022/06/22 02:10:59 by hmakino          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
FLAGS			=	-Wall -Wextra -Werror

#mandatory
SRCS			=	push_swqp.c
SRCS_PATH		= 	$(addprefix ./src/mandatory/, $(SRCS))
OBJS_PATH		=	$(SRCS_PATH:%.c=%.o)

#bonus
BONUS_SRCS		=	push_swap_bonus.c
BONUS_PATH		= 	$(addprefix ./src/bonus/, $(BONUS_SRCS))
BONUS_OBJS_PATH	=	$(BONUS_PATH:%.c=%.o)

ifdef WITH_BONUS
	OBJS_PATH = $(BONUS_OBJS_PATH)
endif

all: 			$(NAME)

$(NAME):		$(OBJS_PATH) $(LIBFT) $(DPRINTF)
				$(MAKE) -C ./libs/libft
				$(MAKE) -C ./libs/ft_dprintf
				$(CC) $(OBJS_PATH) $(LIBFT) $(DPRINTF) $(FLAGS) -o $(NAME)

LIBFT			=	./libs/libft/libft.a
DPRINTF			=	./libs/ft_dprintf/libftdprintf.a

clean:
				$(MAKE) -C ./libs/libft clean
				$(MAKE) -C ./libs/ft_dprintf clean
				$(RM) $(OBJS_PATH)
				$(RM) $(BONUS_OBJS_PATH)

fclean:			clean
				$(RM) $(LIBFT)
				$(RM) $(DPRINTF)
				$(RM) $(NAME)

re:				fclean all

bonus:
				make WITH_BONUS=1

.PHONY:			all clean fclean re bonus
