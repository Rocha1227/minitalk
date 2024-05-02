/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:26:28 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 14:02:42 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexa_base_pointer(unsigned long long ptr)
{
	char	*base16;
	int		a;

	a = 0;
	base16 = "0123456789abcdef";
	a += ft_putchar(base16[ptr]);
	return (a);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	a;

	a = 0;
	if (ptr >= 16)
	{
		a += ft_print_ptr(ptr / 16);
		a += ft_print_ptr(ptr % 16);
	}
	if (ptr <= 15)
	{
		a += ft_hexa_base_pointer(ptr);
	}
	return (a);
}

int	ft_put_pointer(unsigned long long ptr)
{
	int	a;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	a = 0;
	a += ft_putstr("0x");
	a += ft_print_ptr(ptr);
	return (a);
}
