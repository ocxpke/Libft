/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:58:53 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/19 19:33:46 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cpy_dst;
	unsigned char	*cpy_src;

	cpy_dst = (unsigned char *) dst;
	cpy_src = (unsigned char *) src;
	if (!n || dst == src)
		return (dst);
	while (n)
	{
		*cpy_dst = *cpy_src;
		cpy_dst++;
		cpy_src++;
		n--;
	}
	return (dst);
}
