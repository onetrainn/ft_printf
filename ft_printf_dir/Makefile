# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 18:54:46 by lgrossi           #+#    #+#              #
#    Updated: 2023/05/22 18:51:14 by lgrossi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

OBJS := ft_hexadecimal.o ft_printf.o ft_putunsigned.o ft_putchar_printf.o ft_putnbr_printf.o ft_voidhex.o ft_putstr_printf.o
FLAGS := -Wall -Werror -Wextra

all: $(NAME)

%.o : %.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) ${B_OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all