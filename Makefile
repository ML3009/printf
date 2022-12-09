# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 13:11:04 by mvautrot          #+#    #+#              #
#    Updated: 2022/12/09 14:56:32 by mvautrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=libftprintf.a

CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_unsign_nb.c\
	ft_hexa_min.c\
	ft_hexa_max.c\
	ft_putaddr.c\


OBJ=$(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)