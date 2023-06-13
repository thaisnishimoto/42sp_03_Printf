# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 15:42:20 by tmina-ni          #+#    #+#              #
#    Updated: 2023/06/13 07:08:47 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

#printf files
NAME = libftprintf.a
SRC = $(wildcard=*.c)
OBJ = $(SRC:.c=.o)

LIBFT_PATH = ./libft

all: libft.a $(NAME)

#generate libft
libft.a: 
	cd $(LIB_PATH) && make

://web.mit.edu/gnu/doc/html/make_9.html
https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999
https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
https://www.gnu.org/software/make/manual/html_node/Recursion.html
#generate lib for printf
#make knows that the rule needs to be executed if any of those files change
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
