#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 15:31:50 by kescalie          #+#    #+#              #
#    Updated: 2014/12/15 16:47:09 by kescalie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = snake

LIB = libft.a

LIB_REP = libft/

FLAGS = -Wall -Wextra -Werror

SRC =	main.c \
		getarrowkey.c \
		map.c \
		aff_map.c \
		aff_hp.c \
		rand_a_b.c \
		directions.c \
		collisions_case.c \
		free_all.c \
		next_room.c

CC = gcc
SRC_O = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
	@$(MAKE) -C libft/
	@echo "\033[1;34m$(NAME)\033[0m executable genesis..."
	@$(CC) -o $(NAME) $(FLAGS) $(SRC_O) -L libft -lft
	@echo "\033[1;34m$(NAME)\033[0m done."

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS)

clean:
	@rm -f $(SRC_O)
	@make -C $(LIB_REP) clean
	@echo "\033[1;34m$(NAME)\033[0m files.o \033[1;31mannihilated\033[0m."

fclean: clean
	@echo "\033[1;31mDestruction\033[0m of everything, don't panic dude"
	@rm -f $(NAME)
	@make -C $(LIB_REP) fclean

re: fclean all
	@sleep 3
	@clear

.PHONY: clean fclean re
