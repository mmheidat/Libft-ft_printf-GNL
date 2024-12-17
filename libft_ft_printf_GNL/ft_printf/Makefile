# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 14:10:50 by mmheidat          #+#    #+#              #
#    Updated: 2024/01/17 10:43:31 by mmheidat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

DEL = rm -rf

AR = ar -rcs

SRC =   ft_printf.c \
ft_putchar.c \
ft_puthex.c \
ft_putint.c \
ft_putnum.c \
ft_putptr.c \
ft_putstr.c \

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re