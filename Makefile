# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adogru <adogru@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/30 18:09:52 by adogru            #+#    #+#              #
#    Updated: 2026/10/14 19:50:28 by adogru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

# Source files and Object files
SRCS = ft_putstr_fd.c ft_putchar_fd.c ft_strjoin.c ft_strlen.c ft_substr.c ft_strdup.c ft_strlcat.c  ft_strnstr.c ft_bzero.c ft_atoi.c   ft_isdigit.c  ft_memcpy.c \
ft_memset.c ft_isascii.c ft_memmove.c ft_strlcpy.c ft_calloc.c \
ft_isalnum.c ft_isprint.c  ft_toupper.c ft_tolower.c ft_isalpha.c \
 ft_strchr.c ft_strrchr.c  ft_memchr.c ft_strncmp.c ft_memcmp.c 

OBJS = $(SRCS:.c=.o)
HEADER = libft.h

# Default rule
all: $(NAME)

# Link object files to create the executable
# $(NAME): $(OBJS)
#	$(CC) $(OBJS) -o $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Generic rule for compiling source files to object files
# '$@' The file name of the target of the rule. If the target is an archive member, then
# '$@' is the name of the archive file. In this case libft.a Chapter (10.5.3 Automatic variables)
# '$<' The name of the first prerequisite. If the target got its recipe from an implicit
#rule, this will be the first prerequisite added by the implicit rule (see Chapter 10
# [Implicit Rules], page 121).
#

%.o: %.c #$(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

# Clean up build artifacts
fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all fclean