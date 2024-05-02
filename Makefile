CC	=	cc
CFLAGS = -Wall -Wextra -Werror
#command to remove compiled files
RM = rm -rf
#command to create library from objects
ARCH = ar rcs
#target name
NAME = minitalk.a
#libft library
LIBFT = ./libft
#convert all .c to .o
OBJS = $(SRCS:.c=.o)
SRCS = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putpointer.c ft_putstr.c
#Msg Color
GRN = \033[92m
RED = \033[0;31m
DFT = \033[0m

all:$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	@echo "$(GRN) Libft OK $(DFT)"
	cp ./libft/libft.a $(NAME)
	@echo "$(GRN) copy to libftprintf OK! $(DFT)"
	$(ARCH) $(NAME) $(OBJS)
	@echo "$(GRN) $(NAME) OK! $(DFT)"


clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
	@echo "$(GRN) Clean OK $(DFT)"

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
	@echo "$(GRN) Fclean OK $(DFT)"
	
re: fclean all

