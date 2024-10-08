/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:04:52 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/19 16:43:19 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	if (!n)
		return (0);
	cpy1 = (unsigned char *)s1;
	cpy2 = (unsigned char *)s2;
	while ((n > 1) && ((*cpy1) == (*cpy2)))
	{
		cpy1++;
		cpy2++;
		n--;
	}
	return ((*cpy1) - (*cpy2));
}
