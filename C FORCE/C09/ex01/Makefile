# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 10:00:41 by flee              #+#    #+#              #
#    Updated: 2021/03/31 10:00:43 by flee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCD	= srcs/

SRCS    = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= ${addprefix ${SRCD},${SRCS:.c=.o}}

HEAD	= includes

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

.c.o:
			${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

all :		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
