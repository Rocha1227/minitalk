/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:32:50 by krocha            #+#    #+#             */
/*   Updated: 2023/05/15 12:53:04 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	if (n > 0)
	{
		while (n--)
		{
			((unsigned char *)str)[n] = (unsigned char) c;
		}
	}
	return (str);
}
