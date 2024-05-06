/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cliente.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:14 by codespace         #+#    #+#             */
/*   Updated: 2024/05/02 14:52:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	text_to_server(int pid, char c)
{
	int	bit;

	bit = 0;

	if(c >= 0)
	{
		while(bit < 8)
		{
			if (c && (1 << bit) == 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(250);
			bit++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int pid;
	int i;
	
	i = 0;
	if(argc != 3)
		ft_printf("Insert correct format! .client + pid + string\n");
	else 
	{
		pid = ft_atoi(argv[1]);
		while(argv[2][i])
		{
			text_to_server(pid, argv[2][i]);
			i++;
		}
		text_to_server(pid, '\n');
	}
}