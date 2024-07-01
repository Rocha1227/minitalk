/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:28:32 by krocha            #+#    #+#             */
/*   Updated: 2024/07/01 12:41:54 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include "./libft/includes/libft.h"
# include <signal.h>

/* PROTOTYPES*/

void	text_to_server(int pid, char c);
void	handler(int signal, siginfo_t *info, void *n);
void	message_received(int signal);

#endif