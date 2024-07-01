/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:28:32 by krocha            #+#    #+#             */
/*   Updated: 2024/07/01 11:45:11 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft/includes/libft.h"
# include <signal.h>

/* PROTOTYPES*/

void	text_to_server(int pid, char c);
void	ft_putchar_bit(char c);
void	handler(int signal);

#endif