/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:36:56 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/05 15:37:01 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_push(t_list **from, t_list **to)
{
	t_list	*tmp;

	if (!*from)
		return (0);
	tmp = (*from);
	(*from) = (*from)->next;
	push_stack(to, tmp->data);
	free(tmp);
	return (1);
}

int	ft_swap(t_list **lst)
{
	int	tmp;

	if (!*lst)
		return (0);
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	return (1);
}

t_list	*ft_rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*current;

	if (!*list)
		return (NULL);
	tmp = (*list);
	current = (*list)->next;
	*list = (*list)->next;
	while (current->next)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	return (*list);
}

t_list	*ft_reverse_rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*current;
	t_list	*var;

	if (!*list)
		return (NULL);
	tmp = (*list);
	current = (*list)->next->next;
	while (current->next)
	{
		var = current;
		current = current->next;
	}
	*list = current;
	current->next = tmp;
	var->next = NULL;
	return (*list);
}
