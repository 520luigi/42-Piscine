# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kachen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/06 17:20:46 by kachen            #+#    #+#              #
#    Updated: 2018/06/06 17:20:48 by kachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OPTION = -Wall -Wextra -Werror

SRC = allocation.c helper.c main.c printer.c solver.c string.c

NAME = bsq

all: $(NAME)

$(NAME):
	gcc $(OPTION) $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all