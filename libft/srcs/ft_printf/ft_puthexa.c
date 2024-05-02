/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:08:35 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 14:02:48 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_hexa_lower(unsigned int n)
{
	char	*base16;
	int		a;

	a = 0;
	base16 = "0123456789abcdef";
	a += ft_putchar(base16[n]);
	return (a);
}

int	ft_put_hexa_upper(unsigned int n)
{
	char	*base16;
	int		a;

	a = 0;
	base16 = "0123456789ABCDEF";
	a += ft_putchar(base16[n]);
	return (a);
}

int	ft_hexa_base_upper(unsigned int n)
{
	int				a;
	long long int	nb;

	a = 0;
	nb = n;
	if (nb >= 16)
	{
		a += ft_hexa_base_upper(nb / 16);
		a += ft_hexa_base_upper(nb % 16);
	}
	if (nb <= 15)
		a += ft_put_hexa_upper(nb);
	return (a);
}

int	ft_hexa_base_lower(unsigned int n)
{
	int				a;
	long long int	nb;

	a = 0;
	nb = n;
	if (nb >= 16)
	{
		a += ft_hexa_base_lower(nb / 16);
		a += ft_hexa_base_lower(nb % 16);
	}
	if (nb <= 15)
		a += ft_put_hexa_lower(nb);
	return (a);
}
