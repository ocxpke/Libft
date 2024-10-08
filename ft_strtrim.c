/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:39:43 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/27 15:16:40 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char const s1, char const *set)
{
	while (*set)
	{
		if (s1 == (*set))
			return (1);
		set++;
	}
	return (0);
}

size_t	start_cont(char const *s1, char const *set, int mode, size_t len_s1)
{
	size_t	cont;

	cont = 0;
	if (!mode)
	{
		while (is_in((*s1), set) && *s1)
		{
			cont++;
			s1++;
		}
	}
	if (mode)
	{
		while (is_in(s1[len_s1 - 1], set) && s1[len_s1 - 1] && (len_s1 - 1))
		{
			cont++;
			len_s1--;
		}
	}
	return (cont);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	front_cont;
	size_t	back_cont;

	len_s1 = ft_strlen(s1);
	front_cont = start_cont(s1, set, 0, len_s1);
	back_cont = start_cont(s1, set, 1, len_s1);
	if (((int)len_s1 - (int)front_cont - (int)back_cont) < 0)
		return (ft_strdup(""));
	return (ft_substr(s1, front_cont, len_s1 - front_cont - back_cont));
}

/*
char	*new_word(char const *s1, size_t front_cont, size_t back_cont,
		size_t len_s1)
{
	char	*new_word;
	size_t	pos;
	size_t	cpy_front;

	cpy_front = front_cont;
	new_word = (char *)ft_calloc(1, len_s1 - front_cont - back_cont + 1);
	if (!new_word)
		return (NULL);
	pos = 0;
	while (*s1)
	{
		if (!front_cont && pos < len_s1 - back_cont - cpy_front)
		{
			new_word[pos] = *s1;
			pos++;
		}
		if (front_cont)
			front_cont--;
		s1++;
	}
	new_word[pos] = 0;
	return (new_word);
}
*/

// return (new_word(s1, front_cont, back_cont, len_s1));
