# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2023/09/22 13:40:28 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
SOURCES = \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c
			
OBJECTS = $(SOURCES:.c=.o)

BONUS = 

BONUS_OBJECTS = $(BONUS:.c=.o)g

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a 

all: $(NAME)

$(NAME): $(OBJECTS)
			$(AR) -r $@ $?

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
			rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re