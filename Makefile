# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 15:42:20 by tmina-ni          #+#    #+#              #
#    Updated: 2023/06/13 15:04:11 by tmina-ni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------FLAGS--------------------#

CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKE_NO_PRINT = $(MAKE) --no-print-directory


#------------PATH VARIABLES--------------#

LIBFT_PATH = ./libft/
SRC_PATH = ./src/
HEADER_PATH = ./include/


#----------------FILES-------------------#

NAME = libftprintf.a
SRC = $(wildcard $(SRC_PATH)*.c)
OBJ = $(SRC:.c=.o)
HEADER = $(wildcard $(HEADER_PATH)*.h)


#----------------RULES-------------------#

all: libft $(NAME)

#generate libf
libft:
	cd $(LIBFT_PATH) && $(MAKE_NO_PRINT)

#rows rule needs to be executed if any of those .o files change
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJS)

#object files depend on c files and header file
%.o: %.c $(HEADER_PATH)*.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_PATH)*.o
	cd $(LIBFT_PATH) && $(MAKE_NO_PRINT) clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFT_PATH) && $(MAKE_NO_PRINT) fclean

re: fclean all

.PHONY: all libft clean fclean re
