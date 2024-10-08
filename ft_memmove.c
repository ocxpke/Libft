/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:20 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/19 21:05:18 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cpy_dst;
	unsigned char	*cpy_src;

	cpy_dst = (unsigned char *)dst;
	cpy_src = (unsigned char *)src;
	if ((dst <= src) || ((src + n) < dst))
		return (ft_memcpy(dst, src, n));
	while (n--)
		cpy_dst[n] = cpy_src[n];
	return (dst);
}
