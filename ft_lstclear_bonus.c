/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:40:09 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/26 22:10:27 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	(*lst) = NULL;
}
