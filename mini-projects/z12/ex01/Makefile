# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flpop <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/18 12:18:54 by flpop             #+#    #+#              #
#    Updated: 2014/09/18 12:47:35 by flpop            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_cat.o

clean:
		/bin/rm -f ft_cat.o

fclean:
		/bin/rm -f $(NAME)

re:
		fclean all
