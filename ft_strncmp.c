/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:03:59 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/20 15:25:51 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && ((unsigned char)(*s1) == (unsigned char)(*s2))
		&& n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
