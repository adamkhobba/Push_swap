/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:03:27 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/26 08:35:41 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_one_const(int len, int pos, int mid)
{
	int	cost;

	if (pos < mid)
		cost = pos;
	else
		cost = len - pos;
	return (cost);
}

int	ft_check_cheapest(int cost, t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	int		checker;
	int		curr_cost;
	int		pos_node;

	tmp = stack_a;
	checker = 1;
	pos_node = -1;
	curr_cost = cost;
	while (tmp)
	{
		pos_node++;
		curr_cost = ft_cost_return(tmp->data, stack_a, stack_b, pos_node);
		if (cost > curr_cost)
			checker = 0;
		tmp = tmp->next;
	}
	return (checker);
}

int	ft_cal_cost(int pos_target, int pos_node, int len1, int len2)
{
	int	cost;
	int	mid_1;
	int	mid_2;

	mid_1 = ft_cal_mid(len1);
	mid_2 = ft_cal_mid(len2);
	if ((pos_node < mid_1 && pos_target < mid_2) || (pos_node >= mid_1
			&& pos_target >= mid_2))
		cost = max(ft_find_one_const(len1, pos_node, mid_1),
				ft_find_one_const(len2, pos_target, mid_2));
	else
		cost = ft_find_one_const(len1, pos_node, mid_1)
			+ ft_find_one_const(len2, pos_target, mid_2);
	return (cost);
}

int	ft_cost_return(int needer, t_list *stack_a, t_list *stack_b, int pos_node)
{
	int	pos_target;
	int	cost;

	pos_target = ft_search_target(stack_b, needer, 'S');
	if (pos_node == -1)
		return (-1);
	if (pos_target == -1)
		pos_target = ft_search_min_max(stack_b, 'M');
	cost = ft_cal_cost(pos_target, pos_node, ft_lstsize(stack_a),
			ft_lstsize(stack_b));
	return (cost);
}

void	ft_turk_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		cost;

	tmp = *stack_a;
	(*stack_a)->pos_node = -1;
	while (1)
	{
		if (ft_lstsize(*stack_a) <= 3)
		{
			ft_sort_three(stack_a);
			return ;
		}
		printf("check\n");
		sleep(1);
		(*stack_a)->pos_node++;
		(*stack_a)->pos_target = ft_search_target(*stack_b, tmp->data, 'S');
		if ((*stack_a)->pos_target == -1)
		{
			(*stack_a)->pos_target = ft_search_min_max(*stack_b, 'M');
		}
		cost = ft_cal_cost((*stack_a)->pos_target, (*stack_a)->pos_node,
				ft_lstsize(*stack_a), ft_lstsize(*stack_b));
		if (ft_check_cheapest(cost, *stack_a, *stack_b))
		{
			ft_operation(stack_a, stack_b, (*stack_a)->pos_node, 'A');
			tmp = *stack_a;
		}
		tmp = tmp->next;
	}
}
