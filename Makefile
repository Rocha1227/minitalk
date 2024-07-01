# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rocha1227 <rocha1227@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 15:28:29 by krocha            #+#    #+#              #
#    Updated: 2024/07/01 10:05:22 by rocha1227        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
#command to remove compiled files
RM = rm -rf
#command to create library from objects
ARCH = ar rcs
#target name
NAME = minitalk.a
CLIENT = client
SERVER = server
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus
#libft library
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
#Srcs

SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_BONUS_SRC = server_bonus.c
CLIENT_BONUS_SRC = client_bonus.c
#convert all .c to .o
OBJS = $(SRCS:.c=.o)
SRCS = client.c client_bonus.c
SERVER_OBJS = $(SERVER_SRC:.c=.o)
CLIENT_OBJS = $(CLIENT_SRC:.c=.o)
SERVER_BONUS_OBJS = $(SERVER_BONUS_SRC:.c=.o)
CLIENT_BONUS_OBJS = $(CLIENT_BONUS_SRC:.c=.o)

#Msg Color
GRN = \033[92m
RED = \033[0;31m
DFT = \033[0m

all:$(CLIENT) $(SERVER)

bonus: $(CLIENT_BONUS) $(SERVER_BONUS)

$(SERVER): $(LIBFT) $(SERVER_OBJS)
	$(CC) $(CFLAGS) $(SERVER_OBJS) $(LIBFT) -o $@
	@echo "$(GRN) SERVER OK $(DFT)"

$(CLIENT): $(LIBFT) $(CLIENT_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o $@
	@echo "$(GRN) CLIENT OK $(DFT)"

$(SERVER_BONUS): $(LIBFT) $(SERVER_BONUS_OBJS)
	$(CC) $(CFLAGS) $(SERVER_BONUS_OBJS) $(LIBFT) -o $@
	@echo "$(GRN) SERVER BONUS OK $(DFT)"

$(CLIENT_BONUS): $(LIBFT) $(CLIENT_BONUS_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_BONUS_OBJS) $(LIBFT) -o $@
	@echo "$(GRN) CLIENT BONUS OK $(DFT)"

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)
	@echo "$(GRN) LIBFT OK $(DFT)"

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)
	$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)
	$(RM) $(CLIENT_BONUS_OBJS) $(SERVER_BONUS_OBJS)
	@echo "$(GRN) Clean OK $(DFT)"

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(CLIENT)
	$(RM) $(SERVER)
	$(RM) $(CLIENT_BONUS)
	$(RM) $(SERVER_BONUS)

	@echo "$(GRN) Fclean OK $(DFT)"
	
re: fclean all

