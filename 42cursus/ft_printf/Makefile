# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmakino <hmakino@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 05:02:19 by hmakino           #+#    #+#              #
#    Updated: 2022/04/12 15:18:13 by hmakino          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libftprintf.a

SRCS				= ft_printf.c \
					  scrape.c \
					  output.c \
					  utils.c

OBJS			= $(SRCS:.c=.o)

BONUS				= ft_printf_bonus.c \
					  scrape_bonus.c \
					  output_bonus.c \
					  utils_bonus.c

BONUS_OBJS		= $(BONUS:.c=.o)

ifdef WITH_BONUS
OBJS += $(BONUS_OBJS)
endif

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

.PHONY:			all clean fclean re bonus

all:			$(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:
				make WITH_BONUS=1
