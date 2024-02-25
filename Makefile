# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkhut <vkhut@student.42prague.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 17:45:37 by vkhut             #+#    #+#              #
#    Updated: 2024/02/25 17:46:27 by vkhut            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = \
	ft_printchar.c \
	ft_printf.c \
	ft_printnbr.c \
	ft_printptr.c \
	ft_printstr.c \

OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $@ $?
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re