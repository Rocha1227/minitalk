/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:01:53 by krocha            #+#    #+#             */
/*   Updated: 2024/04/15 14:02:55 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkvariable(const char *str, int i, va_list arg_list)
{
	if (str[i] == '%')
		return (ft_putchar('%'));
	else if (str[i] == 'c')
		return (ft_putchar(va_arg(arg_list, int)));
	else if (str[i] == 's')
		return (ft_putstr(va_arg(arg_list, char *)));
	else if (str[i] == 'p')
		return (ft_put_pointer(va_arg(arg_list, unsigned long long)));
	else if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(arg_list, int)));
	else if (str[i] == 'u')
		return (ft_putnbr_uns(va_arg(arg_list, unsigned int)));
	else if (str[i] == 'x')
		return (ft_hexa_base_lower(va_arg(arg_list, unsigned int)));
	else if (str[i] == 'X')
		return (ft_hexa_base_upper(va_arg(arg_list, unsigned int)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		i;
	int		a;

	va_start(arg_list, str);
	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			a += checkvariable(str, i, arg_list);
		}
		else
			a += ft_putchar(str[i]);
		i++;
	}
	va_end(arg_list);
	return (a);
}
