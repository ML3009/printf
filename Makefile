# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: AMODIFIERmvautrot <mvautrot@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 16:54:38 by ml                #+#    #+#              #
#    Updated: 2022/12/02 16:54:38 by ml               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

CC=gcc
CFLAGS=-Wall -Wextra -Werror

SRC=ft_printf.c\


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