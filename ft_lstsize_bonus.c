/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:34:06 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/26 20:17:15 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (!lst)
		return (0);
	cont = 1;
	while (lst->next)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}
