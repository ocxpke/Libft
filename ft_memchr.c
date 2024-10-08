/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:04:23 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/18 17:24:18 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
	while (n)
	{
		if (*cpy == (unsigned char)c)
			return (cpy);
		cpy++;
		n--;
	}
	return (0);
}
