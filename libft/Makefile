#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 15:31:50 by kescalie          #+#    #+#              #
#    Updated: 2014/10/02 16:45:46 by kescalie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
CC = gcc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c ft_putendl.c ft_strequ.c ft_strnew.c \
	ft_isprint.c ft_putnbr.c ft_strrchr.c \
	ft_memalloc.c ft_putstr.c ft_tolower.c \
	ft_memccpy.c ft_strcat.c ft_strlcat.c ft_toupper.c \
	ft_memchr.c ft_strchr.c ft_strlen.c ft_memcmp.c ft_strmap.c \
	ft_atoi.c ft_memcpy.c ft_strclr.c ft_strmapi.c \
	ft_bzero.c ft_memdel.c ft_strcmp.c ft_strncat.c \
	ft_isalnum.c ft_memmove.c ft_strcpy.c ft_strncmp.c \
	ft_isalpha.c ft_memset.c ft_strdel.c ft_strncpy.c \
	ft_isascii.c ft_putchar.c ft_strdup.c ft_strnequ.c \
	ft_striter.c ft_striteri.c ft_strsub.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_strlcat.c ft_putnbr_fd.c ft_strnstr.c ft_strstr.c \
	ft_itoa.c ft_strsplit.c get_next_line.c ft_putstr_spe.c \
	ft_putchar_spe.c ft_putnbr_spe.c ft_printf.c

SRC_O = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
	@echo "Compilating library, hold on, Master..."
	@$(CC) $(FLAGS) -I libft/includes/ -c $(SRC)
	@ar rc $(NAME) $(SRC_O)
	@echo "Library done."

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS)

clean:
	@rm -f $(SRC_O)
	@echo "Destruction of files .o"

fclean: clean
	@rm -f $(NAME)
	@echo "Destruction of library"

re: fclean all
