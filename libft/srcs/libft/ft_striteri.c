/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:17:14 by krocha            #+#    #+#             */
/*   Updated: 2023/05/01 16:18:08 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	size_t	i;
	size_t	size_s;

	i = 0;
	size_s = ft_strlen(s);
	while (i < size_s)
	{
		f(i, &s[i]);
		i++;
	}
}
