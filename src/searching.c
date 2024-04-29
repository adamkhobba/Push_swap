/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searching.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:01 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:20:30 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_search_closet_bigger(t_list *stack, int needer)
{
	int		pos_bigger;
	int		bigger;
	t_list	*tmp;

	pos_bigger = -1;
	bigger = INT_MAX;
	tmp = stack;
	while (stack)
	{
		if (stack->data > needer && stack->data <= bigger)
			bigger = stack->data;
		stack = stack->next;
	}
	while (tmp)
	{
		pos_bigger++;
		if (tmp->data == bigger)
			return (pos_bigger);
		tmp = tmp->next;
	}
	return (-1);
}

int	ft_search_closet_smaller(t_list *stack, int needer)
{
	int		pos_smaller;
	int		smaller;
	t_list	*tmp;

	pos_smaller = -1;
	smaller = INT_MIN;
	tmp = stack;
	while (stack)
	{
		if (stack->data < needer && stack->data >= smaller)
			smaller = stack->data;
		stack = stack->next;
	}
	while (tmp)
	{
		pos_smaller++;
		if (tmp->data == smaller)
			return (pos_smaller);
		tmp = tmp->next;
	}
	return (-1);
}

int	ft_search_target(t_list *stack, int needer, char c)
{
	int	pos_target;

	pos_target = 0;
	if (!stack)
		return (-1);
	if (c == 'S')
		pos_target = ft_search_closet_smaller(stack, needer);
	else if (c == 'B')
		pos_target = ft_search_closet_bigger(stack, needer);
	return (pos_target);
}
