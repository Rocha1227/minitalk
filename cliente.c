/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cliente.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:14 by codespace         #+#    #+#             */
/*   Updated: 2024/04/23 14:44:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	text_to_server(int pid, char c)
{
	int	bit;

	bit = 0;

	if(c >= 0)
	{
		while(bit < 8)
		{
			if (c && (1 << bit) == 0)
			
		}
	}
}

int	main(int argc, char *argv[])
{
	if(argc != 3)
	{
		ft_printf("Insert correct format! .client + pid + string"\n);
	}
	else 
	{
		
	}
}