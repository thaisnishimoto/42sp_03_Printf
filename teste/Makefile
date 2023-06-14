# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 15:43:08 by tmina-ni          #+#    #+#              #
#    Updated: 2023/06/14 16:17:32 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------FLAGS---------------------#

CC = cc
CFLAGS = -Wall -Wextra -Werror

#--------------DIRECTORIES------------------#

LIBFT_PATH = ../libft/

#-----------------RULES---------------------#

all:
	$(CC) -g3 $(CFLAGS) *.c -L$(LIB_PATH) -lft -L.. -lftprintf -lrt -lm -o program
	./program
	$(MAKE) fclean

valgrind: all
	valgrind --leak-check=full --show-leak-kinds=all ./program

clean:
	rm -f *.o

fclean: clean
	rm -f program

re: fclean all

.PHONY: all valgrind clean fclean re
