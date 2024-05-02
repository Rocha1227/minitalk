/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:06:01 by krocha            #+#    #+#             */
/*   Updated: 2023/05/19 14:02:05 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_count_words(char const *s, char delim)
{
	int	i;
	int	is_delim;
	int	word;

	is_delim = 1;
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == delim)
			is_delim = 1;
		if (s[i] != delim && is_delim)
		{
			word++;
			is_delim = 0;
		}
		i++;
	}
	return (word);
}

char	*ft_get_words(char *s, char c)
{
	char	*reserv;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	len = i;
	reserv = malloc(sizeof(char) * (len + 1));
	if (!reserv)
		return (NULL);
	reserv[len] = '\0';
	while (len > 0)
		reserv[--len] = s[--i];
	return (reserv);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		word_counter;
	int		word_len;

	if (!s)
		return (NULL);
	word_len = ft_count_words(s, c);
	word_counter = 0;
	new = malloc(sizeof(char *) * (word_len + 1));
	if (!new)
		return (NULL);
	while (word_counter < word_len)
	{
		while (*s == c)
			s++;
		new[word_counter] = ft_get_words((char *)s, c);
		word_counter++;
		while (*s != c && *s != '\0')
			s++;
	}
	new[word_counter] = NULL;
	return (new);
}
