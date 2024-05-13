/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:26 by codespace         #+#    #+#             */
/*   Updated: 2024/04/23 14:44:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_putchar_bit(char c)
{
	if(c > 0)
		write(1,&c, 1);
}

void	handler (int signal)
{
	static int	c;
	static int	bit;

	bit = 0;

	if(signal == SIGUSR1)
	{
		c |= 1 << bit;
		bit++;
	}
	if(bit == 8)
	{
		ft_putchar_bit(c);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char *argv[])
{
	struct	sigaction action;

	action.sa_handler = &handler;
	(void)argv;
	
	if(argc != 1)
	{
		ft_printf("Incorrect Input! Try ./server\n");
		return (0);
	}
	ft_printf("My PiD is %d \n", getpid());
	while(1)
	{
		sigaction(SIGUSR1, &action, NULL);
		sigaction(SIGUSR2, &action, NULL);
		pause();
	}
}