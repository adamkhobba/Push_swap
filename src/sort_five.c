/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:06 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:19:43 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_three(t_list **stack)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (!(*stack)->next)
			return ;
		if ((*stack)->data >= (*stack)->next->data)
			ft_swap(stack, 'A');
		if (!(*stack)->next->next)
			return ;
		if ((*stack)->next->data >= (*stack)->next->next->data)
			ft_reverse_rotate(stack, 'A');
		i++;
	}
}

void	ft_push_back(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		ft_push(stack_b, stack_a, "BA");
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	ft_push_the_lowest(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_push_back(stack_a, stack_b);
}

void	ft_push_the_lowest(t_list **stack_a, t_list **stack_b)
{
	int	list_size;
	int	positon;

	if (!*stack_a)
		return ;
	list_size = ft_lstsize(*stack_a);
	while (list_size > 3)
	{
		positon = ft_search_min(*stack_a);
		while (positon != 0)
		{
			if (positon == 1)
				ft_swap(stack_a, 'A');
			else
				ft_reverse_rotate(stack_a, 'A');
			positon = ft_search_min(*stack_a);
		}
		ft_push(stack_a, stack_b, "AB");
		list_size = ft_lstsize(*stack_a);
	}
	return ;
}
