/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:52:59 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/23 19:00:18 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	size_t	iter;
	char	*ret;

	len_s = ft_strlen(s);
	iter = 0;
	ret = (char *)ft_calloc(1, len_s + 1);
	if (!ret)
		return (NULL);
	while (s[iter])
	{
		ret[iter] = f(iter, s[iter]);
		iter++;
	}
	ret[iter] = 0;
	return (ret);
}
