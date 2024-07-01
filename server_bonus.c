/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:26 by codespace         #+#    #+#             */
/*   Updated: 2024/07/01 12:49:31 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler(int signal, siginfo_t *info, void *n)
{
	static int	c;
	static int	bit = 0;

	(void) n;
	(void) info;
	if (signal == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			kill(info->si_pid, SIGUSR1);
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char *argv[])
{
	struct sigaction	action;

	(void)argv;
	action.sa_sigaction = &handler;
	action.sa_flags = SA_SIGINFO;
	if (argc != 1)
	{
		ft_printf("Incorrect Input! Try ./server_bonus \n");
		return (0);
	}
	ft_printf("My PiD is %d \n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &action, NULL);
		sigaction(SIGUSR2, &action, NULL);
		pause();
	}
}
