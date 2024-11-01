/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:55:42 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/29 17:32:15 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	**current;
	t_list	*new_node;

	result = NULL;
	current = &result;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		new_node->content = f(lst->content);
		if (!new_node || new_node->content == NULL)
		{
			if (new_node)
				free(new_node);
			ft_lstclear(&result, del);
			return (NULL);
		}
		new_node->next = NULL;
		*current = new_node;
		current = &new_node->next;
		lst = lst->next;
	}
	return (result);
}
