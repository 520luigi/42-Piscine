# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szheng <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/02 13:31:11 by szheng            #+#    #+#              #
#    Updated: 2018/06/02 15:40:38 by szheng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
CC = gcc
FLAG = -Wall -Werror - Wextra
HEADER_DIR = -I include
SRC = srcs/

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(HEADER_DIR) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
