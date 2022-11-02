# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 07:23:04 by mahansal          #+#    #+#              #
#    Updated: 2022/11/02 02:08:05 by mahansal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

NAME 	= libftprintf.a

SRCS 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthex.c ft_put_pointer.c

OBJS 	= $(SRCS:.c=.o)

CFLAGS 	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
