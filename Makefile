# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ephantom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 17:43:42 by ephantom          #+#    #+#              #
#   Updated: 2021/12/15 12:16:59 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	pa_pb.c			sorting_utils.c		libft_utils.c\
			ra_rb_rr.c		sorting_main.c		choose_path_utils.c\
			rra_rrb_rrr.c	ft_atoi.c			start_a_b.c\
			sa_sb_ss.c		ft_split.c			utils.c\
			main.c			lst_utils.c

HEADER	=	push_swap.h

OBJS	=	${SRCS:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

RM		=	 rm -f

.PHONY:		all clean fclean re

all:		${NAME}

%.o: 		%.c ${HEADER}
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
