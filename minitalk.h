#ifndef MINITALK_H
# define	MINITALK_H

#include "./libft/includes/libft.h"
#include <signal.h>


/* PROTOTYPES*/

void	text_to_server(int pid, char c);
void ft_putchar_bit(char c);
void	handler (int signal);

#endif