/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ara < jose-ara@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:53:01 by jose-ara          #+#    #+#             */
/*   Updated: 2024/09/27 14:48:35 by jose-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_back(t_list *ret, void (*del)(void *))
{
	if (ret)
	{
		free_back(ret->next, del);
		del(ret->content);
		free(ret);
	}
	ret = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*ret;

	new_list = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!new_list || !lst)
		return (NULL);
	ret = new_list;
	while (lst)
	{
		new_list->content = f(lst->content);
		if (lst->next)
		{
			new_list->next = (t_list *)ft_calloc(1, sizeof(t_list));
			if (!(new_list->next))
			{
				free_back(ret, del);
				return (NULL);
			}
			new_list = new_list->next;
		}
		else
			new_list->next = NULL;
		lst = lst->next;
	}
	return (ret);
}
