/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:26:47 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/26 19:44:58 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	cont;

	if (!*s)
		return (0);
	cont = 1;
	if (*s == c)
		cont = 0;
	while (*s)
	{
		if (*s == c && s[1] != c && s[1])
			cont++;
		s++;
	}
	return (cont);
}

static size_t	take_len(char const *s, char c)
{
	size_t	cont;

	cont = 0;
	while (s[cont] && s[cont] != c)
		cont++;
	return (cont);
}

static char	**free_back(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len_word;

	i = 0;
	ret = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s)
		{
			len_word = take_len(s, c);
			ret[i] = ft_substr(s, 0, len_word);
			if (!ret[i])
				return (free_back(ret));
			i++;
			s += len_word;
		}
	}
	ret[i] = 0;
	return (ret);
}
