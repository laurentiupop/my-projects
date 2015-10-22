# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flpop <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/21 22:32:13 by flpop             #+#    #+#              #
#    Updated: 2014/09/21 22:32:19 by flpop            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c
SRC2 = ft_sir.c
SRC3 = ft_sum.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC) $(SRC2) $(SRC3)
			gcc -o $(NAME) eval_expr.o ft_sir.o ft_sum.o 

clean:
		/bin/rm -f eval_expr.o ft_sir.o ft_sum.o

fclean: clean
		/bin/rm -f $(NAME)

