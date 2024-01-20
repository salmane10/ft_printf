# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <slouham@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:48:37 by slouham           #+#    #+#              #
#    Updated: 2024/01/20 12:10:48 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \

OBJS = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR =	ar -rc

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
