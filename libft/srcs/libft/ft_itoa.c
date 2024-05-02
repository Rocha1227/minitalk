/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:53:54 by krocha            #+#    #+#             */
/*   Updated: 2023/05/01 15:52:45 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_number(int n)
{
	int		size;
	long	nb;

	size = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int			size;
	long		nb;
	char		*dest;

	nb = n;
	if (n < 0)
		nb = -nb;
	size = size_number(n);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	dest[size--] = '\0';
	if (n < 0)
		dest[0] = '-';
	else if (n == 0)
		dest[0] = '0';
	while (nb > 0)
	{
		dest[size--] = nb % 10 + '0';
		nb /= 10;
	}
	return (dest);
}
