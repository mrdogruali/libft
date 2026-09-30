# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adogru <adogru@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/30 18:09:52 by adogru            #+#    #+#              #
#    Updated: 2026/09/30 20:00:13 by adogru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_bzero.c    ft_isalpha.c  ft_isdigit.c  ft_memcpy.c   ft_memset.c ft_isalnum.c  ft_isascii.c  ft_isprint.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean

.PHONY: all clean fclean re
