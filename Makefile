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
#libft library
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
#Srcs

SERVER_SRC = server.c
CLIENT_SRC = client.c
#convert all .c to .o
OBJS = $(SRCS:.c=.o)
SRCS = client.c
SERVER_OBJS = $(SERVER_SRC:.c=.o)
CLIENT_OBJS = $(CLIENT_SRC:.c=.o)


#Msg Color
GRN = \033[92m
RED = \033[0;31m
DFT = \033[0m

all:$(CLIENT) $(SERVER)

$(SERVER): $(LIBFT) $(SERVER_OBJS)
	$(CC) $(CFLAGS) $(SERVER_OBJS) $(LIBFT) -o $@

$(CLIENT): $(LIBFT) $(CLIENT_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)
	@echo "$(GRN) LIBFT OK $(DFT)"

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)
	$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)
	@echo "$(GRN) Clean OK $(DFT)"

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(CLIENT)
	$(RM) $(SERVER)

	@echo "$(GRN) Fclean OK $(DFT)"
	
re: fclean all

