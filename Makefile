# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <slouham@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:48:37 by slouham           #+#    #+#              #
#    Updated: 2024/01/31 13:34:09 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c	\
		ft_putchar.c\
		ft_putnbr.c	\
		ft_putstr.c	\
		ft_putmem.c \
		ft_hex_down.c\
		ft_hex_up.c	\
		ft_put_unsigned.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)
 
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

