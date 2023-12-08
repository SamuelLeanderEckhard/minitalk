# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 19:44:03 by seckhard          #+#    #+#              #
#    Updated: 2023/12/08 00:45:23 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

OBJSERVER	:=	server.o
OBJCLIENT	:=	client.o
LIBFT_A		:=	libft/libft.a
FT_PRINTF_A	:=	ft_printf/libftprintf.a
SERVER		:=	server
CLIENT		:=	client
CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror

all: libgen $(SERVER) $(CLIENT)

libgen:
	@make -C libft
	@make -C ft_printf

$(SERVER): minitalk.h $(OBJSERVER)
	$(CC) $(OBJSERVER) $(LIBFT_A) $(FT_PRINTF_A) $(CFLAGS) -o $(SERVER)

$(CLIENT): minitalk.h $(OBJCLIENT)
	$(CC) $(OBJCLIENT) $(LIBFT_A) $(FT_PRINTF_A) $(CFLAGS) -o $(CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJSERVER) $(OBJCLIENT)
	make clean -C libft
	make clean -C ft_printf

fclean: clean
	rm -f $(NAME) $(CLIENT)
	make fclean -C libft
	make fclean -C ft_printf

re: fclean all

.PHONY: all clean fclean re libgen