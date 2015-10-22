# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flpop <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/21 22:02:32 by flpop             #+#    #+#              #
#    Updated: 2014/09/21 22:02:40 by flpop            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES=./srcs/checkcolle.c \
		./srcs/finput.c \
		./srcs/foutput.c \
		./srcs/ft_append.c \
		./srcs/ft_putchar.c \
		./srcs/ft_putnbr.c \
		./srcs/ft_realloc.c \
		./srcs/ft_size.c \
		./srcs/ft_strcpy.c \
		./srcs/ft_strlen.c \
		./srcs/node.c \
		./srcs/preparecolle.c \
		./srcs/validatefunctions.c \
		./srcs/main.c

INCLUDES=-I ./includes

FLAGS=-Wall -Wextra -Werror

all:
	gcc $(FLAGS) $(SOURCESDIR)$(SOURCES) $(INCLUDES) -o colle-2

fclean:
	/bin/rm -f colle-2
