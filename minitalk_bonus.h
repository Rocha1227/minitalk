/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocha1227 <rocha1227@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:28:32 by krocha            #+#    #+#             */
/*   Updated: 2024/07/01 09:51:49 by rocha1227        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include "./libft/includes/libft.h"
# include <signal.h>

/* PROTOTYPES*/

void	text_to_server(int pid, char c);
void	ft_putchar_bit(char c);
void	handler(int signal, siginfo_t *info, void *n);
void	message_received(int signal);

#endif