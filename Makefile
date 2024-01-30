# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <slouham@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:48:37 by slouham           #+#    #+#              #
#    Updated: 2024/01/30 15:32:59 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

SRC =	ft_printf.c		\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_putnbr.c		\
		ft_hex_down.c	\
		ft_hex_up.c		\
		ft_putmem.c		

CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)
AR = ar -rc

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
