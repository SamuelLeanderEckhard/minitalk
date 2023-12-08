# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2023/12/08 00:44:14 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
SOURCES = \
					ft_printf.c ft_putchar.c ft_putchar_fd.c \
					ft_putstr.c ft_putnbr.c ft_putunsignednbr.c \
					ft_puthexa.c ft_handle_ptr.c ft_strchr.c \

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a

INCLUDE = ft_printf.h

CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

$(NAME): $(OBJECTS)
			$(LIBC) $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
			rm -f $(OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
