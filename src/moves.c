/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:36:38 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/03 06:30:49 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_push(t_list **from, t_list **to, char *s)
{
	t_list	*tmp;

	if (!*from)
		return (0);
	tmp = (*from);
	(*from) = (*from)->next;
	push_stack(to, tmp->data);
	if (!ft_strncmp(s, "BA", 2))
		ft_putstr("pa\n", 1);
	else if (!ft_strncmp(s, "AB", 2))
		ft_putstr("pb\n", 1);
	free(tmp);
	return (1);
}

int	ft_swap(t_list **lst, char c)
{
	int	tmp;

	if (!*lst || ft_lstsize(*lst) < 2)
		return (0);
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	if (c == 'A')
		ft_putstr("sa\n", 1);
	else if (c == 'B')
		ft_putstr("sb\n", 1);
	return (1);
}

void	ft_rotate(t_list **list, char c)
{
	t_list	*tmp;
	t_list	*current;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	tmp = (*list);
	current = (*list)->next;
	*list = (*list)->next;
	while (current->next)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (c == 'A')
		ft_putstr("ra\n", 1);
	else if (c == 'B')
		ft_putstr("rb\n", 1);
}

void	ft_reverse_rotate(t_list **list, char c)
{
	t_list	*tmp;
	t_list	*current;
	t_list	*var;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	tmp = (*list);
	current = (*list);
	while (current->next)
	{
		var = current;
		current = current->next;
	}
	*list = current;
	current->next = tmp;
	var->next = NULL;
	if (c == 'A')
		ft_putstr("rra\n", 1);
	else if (c == 'B')
		ft_putstr("rrb\n", 1);
}
