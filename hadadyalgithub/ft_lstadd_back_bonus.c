/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:53 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/28 12:48:15 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new -> next = NULL;
	}
	else
	{
		while (current -> next != NULL)
			current = current -> next;
		current -> next = new;
		new -> next = NULL;
	}
}
/*
int main ()
{
        int i = 1;
        int *v = malloc(sizeof(int));
        int *p = malloc(sizeof(int));
        t_list *lst = NULL;
        *v = 42;
        *p = 15;
        t_list *node1 = ft_lstnew(v);
        t_list *node2 = ft_lstnew(p);
        ft_lstadd_back(&lst, node1);
        ft_lstadd_back(&lst, node2);
        t_list *current;
        current = lst;
        while(current != NULL)
        {
           printf("node added %d content %d\n",i,*(int *)(current -> content));
           i++;
           current = current -> next;
        }
        free(lst);
        return(0);
}*/
