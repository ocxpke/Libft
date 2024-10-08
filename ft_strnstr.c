/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:05:29 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/18 17:07:53 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	roam_little;

	if (!(*little))
		return ((char *)big);
	if (!(*big))
		return (0);
	while (*big && len)
	{
		if (*big == *little)
		{
			roam_little = 0;
			while (big[roam_little] == little[roam_little]
				&& little[roam_little] && (len - roam_little))
				roam_little++;
			if (!little[roam_little])
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (0);
}
