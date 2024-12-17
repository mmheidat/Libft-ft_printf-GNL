# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmheidat <mmheidat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 12:12:23 by mmheidat          #+#    #+#              #
#    Updated: 2024/12/17 16:54:30 by mmheidat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror

# Define directories
PRINTF_DIR := ft_printf
GNL_DIR := get_next_line

# Define source files
SRCS := ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_atoi.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS := ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

# Add ft_printf and get_next_line source files
PRINTF_SRCS := $(wildcard $(PRINTF_DIR)/*.c)
GNL_SRCS := $(wildcard $(GNL_DIR)/*.c)

HEADERS := libft.h

OBJS := $(SRCS:.c=.o) $(PRINTF_SRCS:.c=.o) $(GNL_SRCS:.c=.o)
OBONUS := $(BONUS:.c=.o)
NAME := libft.a

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) $(OBONUS)
	ar -rcs $@ $(OBJS) $(OBONUS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(OBONUS)
	ar -rcs $(NAME) $(OBJS) $(OBONUS)
