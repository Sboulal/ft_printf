# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:18:24 by saboulal          #+#    #+#              #
#    Updated: 2022/11/13 06:48:57 by saboulal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putnbr_base_add.c ft_putnbr_base.c ft_putnbr_u.c\
	 ft_printf.c ft_putchar.c  ft_putstr.c  ft_putnbr.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror 

RM  = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean :
	$(RM) $(OBJ) 

fclean : clean 
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean re fclean
