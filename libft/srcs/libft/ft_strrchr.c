/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:03:02 by krocha            #+#    #+#             */
/*   Updated: 2023/05/19 12:58:29 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = ft_strlen(str);
	if (c == 0)
		return ((char *)str + a);
	while (a >= 0)
	{
		if ((unsigned char)str[a] == (unsigned char)c)
			return ((char *)str + a);
		a--;
	}
	if ((unsigned char)c == '\0' && str[a] == '\0')
		return ((char *)str + a);
	return (NULL);
}
