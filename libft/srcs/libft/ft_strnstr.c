/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:15:52 by krocha            #+#    #+#             */
/*   Updated: 2023/05/01 11:04:05 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *main, const char *str, size_t n)
{
	size_t	i;
	size_t	a;

	if (*str == '\0' || str == NULL)
		return ((char *)main);
	i = 0;
	while (main[i] != '\0' && i < n)
	{
		a = 0;
		while (str[a] == main[i + a] && i + a < n)
		{
			if (str[a + 1] == '\0')
				return ((char *)main + i);
			a++;
		}
		i++;
	}
	return (NULL);
}
