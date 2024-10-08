/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:26:37 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/21 18:22:51 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	cont;
	size_t	len_s;
	char	*substr;

	cont = 0;
	len_s = ft_strlen(s);
	if (len > len_s)
		len = len_s;
	if (start > len_s)
		len = 0;
	if (len > (len_s - start))
		len = len_s - start;
	substr = (char *)ft_calloc(1, len + 1);
	if (!substr)
		return (NULL);
	if (!(*s) || start > len_s)
		return (substr);
	while (cont < len && s[start + cont])
	{
		substr[cont] = s[start + cont];
		cont++;
	}
	substr[cont] = 0;
	return (substr);
}
