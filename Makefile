# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/04 16:37:42 by fkarnats          #+#    #+#              #
#    Updated: 2019/01/04 16:37:54 by fkarnats         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c reader.c solver.c map.c tetrimino.c

OBJ = main.o reader.o solver.o map.o tetrimino.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(FLAG) -c $(SRC) -I libft
	gcc $(FLAG) -o $(NAME) $(OBJ) -I libft -L./libft -lft

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re:	fclean all
