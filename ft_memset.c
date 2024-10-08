/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:57:06 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/17 18:57:39 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;
	void	*cpy;

	cpy = s;
	cont = 0;
	while (cont < n)
	{
		(*(char *)s) = c;
		cont++;
		s++;
	}
	return (cpy);
}
