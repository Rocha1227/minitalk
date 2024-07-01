/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocha1227 <rocha1227@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:14 by codespace         #+#    #+#             */
/*   Updated: 2024/07/01 09:51:12 by rocha1227        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	text_to_server(int pid, char c)
{
	int	bit;

	bit = 0;
	if (c >= 0)
	{
		while (bit < 8)
		{
			if ((c & (1 << bit)) == 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(300);
			bit++;
		}
	}
}

void	message_received(int signal)
{
	if(signal == SIGUSR1)
		ft_printf("Message received by the server!");
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	i;
	struct sigaction action;

	action.sa_handler = &message_received;
	i = 0;
	if (argc != 3)
		ft_printf("Insert correct format! .client + pid + string\n");
	else
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i])
		{
			sigaction(SIGUSR1, &action,NULL);
			sigaction(SIGUSR2, &action,NULL);
			text_to_server(pid, argv[2][i]);
			i++;
		}
		text_to_server(pid,argv[2][i]);
		text_to_server(pid, '\n');
	}
}
