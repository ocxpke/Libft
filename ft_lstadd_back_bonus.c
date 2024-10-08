/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:11:11 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/26 21:30:01 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (!lst)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
}
