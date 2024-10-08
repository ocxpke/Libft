/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:03:20 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/20 15:09:31 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cpy;

	cpy = 0;
	while (*s)
	{
		if ((unsigned char)(*s) == (unsigned char)c)
			cpy = (char *)s;
		s++;
	}
	if ((unsigned char)(*s) == (unsigned char)c)
		return ((char *)s);
	return (cpy);
}
