# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adogru <adogru@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/30 18:09:52 by adogru            #+#    #+#              #
#    Updated: 2026/10/07 14:43:21 by adogru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

# Source files and Object files
SRCS = ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strncmp.c  ft_toupper.c   ft_atoi.c	ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strnstr.c \
ft_bzero.c    ft_isdigit.c  ft_memcpy.c   ft_strlcat.c  ft_strrchr.c  \
ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcpy.c  ft_tolower.c 
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

# Default rule
all: $(NAME)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile .c files
ft_isalpha.c: $(HEADER)
ft_memchr.c: $(HEADER)
ft_memset.c: $(HEADER)
ft_strncmp.c: $(HEADER)
ft_toupper.c: $(HEADER)
ft_atoi.c: $(HEADER)
ft_isascii.c: $(HEADER)
ft_memcmp.c: $(HEADER)
ft_strchr.c: $(HEADER)
ft_strnstr.c: $(HEADER)
ft_bzero.c: $(HEADER)
ft_isdigit.c: $(HEADER)
ft_memcpy.c: $(HEADER)
ft_strlcat.c: $(HEADER)
ft_strrchr.c: $(HEADER)
ft_isalnum.c: $(HEADER)
ft_isprint.c: $(HEADER)
ft_memmove.c: $(HEADER)
ft_strlcpy.c: $(HEADER)
ft_tolower.c: $(HEADER)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Generic rule for compiling source files to object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	rm -f $(OBJS)

# Clean up build artifacts
fclean: clean
	rm -f $(NAME)

# Phony targets
.PHONY: all fclean