/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:08:31 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 14:02:45 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long long int	nb;
	int				a;

	a = 0;
	nb = n;
	if (nb < 0)
	{
		a++;
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		a += ft_putnbr(nb / 10);
		a += ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		a += ft_putchar(nb + '0');
	}
	return (a);
}

int	ft_putnbr_uns(int n)
{
	unsigned int	nb;
	int				a;

	a = 0;
	nb = n;
	if (nb >= 10)
	{
		a += ft_putnbr(nb / 10);
		a += ft_putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		a += ft_putchar(nb + '0');
	}
	return (a);
}
