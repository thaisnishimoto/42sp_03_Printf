# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 15:43:08 by tmina-ni          #+#    #+#              #
#    Updated: 2023/06/18 02:17:28 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------FLAGS---------------------#

CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKE_NO_PRINT = $(MAKE) --no-print-directory

#--------------DIRECTORIES------------------#

LIBFT_PATH = ../libft/
H_PATH = ../include/
SRC = $(wildcard *.c)

#-----------------RULES---------------------#

all:
	$(CC) -g3 $(CFLAGS) $(SRC) -L.. -lftprintf -L$(LIBFT_PATH) -lft -o program
#	$(CC) -g3 $(CFLAGS) $(SRC) ../src/*c -L.. -lftprintf -lrt -lm -o program
	./program
	$(MAKE_NO_PRINT) fclean

valgrind: all
	valgrind --leak-check=full --show-leak-kinds=all ./program

clean:
	rm -f *.o

fclean: clean
	rm -f program

re: fclean all

.PHONY: all valgrind clean fclean re
