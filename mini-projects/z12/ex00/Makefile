# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flpop <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/18 11:34:58 by flpop             #+#    #+#              #
#    Updated: 2014/09/18 15:41:32 by flpop            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o ft_display_file -Wall -Wextra -Werror ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
