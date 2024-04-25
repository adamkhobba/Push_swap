/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:03:17 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/25 10:37:42y akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_cal_mid(int len)
{
	int	mid;

	if (len % 2)
		mid = len / 2;
	else
	{
		if (len > 2)
			mid = len / 2 - 1;
		else
			mid = 2;
	}
	return (mid);
}

void	ft_still_need_rr(t_list **stack_a, t_list **stack_b, char const *option)
{
	if (option[0] == 'N')
	{
		while ((*stack_a)->pos_node)
		{
			ft_reverse_rotate(stack_a, 'A');
			if ((*stack_a)->pos_node == ft_lstsize(*stack_a) - 1)
			{
				ft_reverse_rotate(stack_a, 'A');
				(*stack_a)->pos_node = 0;
			}
			(*stack_a)->pos_node++;
		}
	}
	if (option[1] == 'T')
	{
		while ((*stack_a)->pos_target)
		{
			ft_reverse_rotate(stack_b, 'B');
			if ((*stack_a)->pos_target == ft_lstsize(*stack_b) - 1)
			{
				ft_reverse_rotate(stack_b, 'B');
				(*stack_a)->pos_target = 0;
			}
			(*stack_a)->pos_target++;
		}
	}
}

void	ft_still_need_r(t_list **stack_a, t_list **stack_b, const char *option)
{
	if (option[0] == 'N')
	{
		while ((*stack_a)->pos_node)
		{
			ft_rotate(stack_a, 'A');
			(*stack_a)->pos_node--;
		}
	}
	if (option[1] == 'T')
	{
		while ((*stack_a)->pos_target)
		{
			ft_rotate(stack_b, 'B');
			(*stack_a)->pos_target--;
		}
	}
}

void	ft_both_top_mid(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->pos_node && (*stack_a)->pos_target)
	{
		ft_rotate_two(stack_a, stack_b);
		if (!(*stack_a)->pos_node || !(*stack_a)->pos_target)
			ft_still_need_r(stack_a, stack_b, "NT");
		(*stack_a)->pos_target--;
		(*stack_a)->pos_node--;
	}
}

void	ft_both_bottom_mid(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->pos_node && (*stack_b)->pos_target)
	{
		ft_reverse_rotate_two(stack_a, stack_b);
		if ((*stack_a)->pos_node == ft_lstsize(*stack_a) - 1
			|| (*stack_a)->pos_target == ft_lstsize(*stack_b) - 1)
		{
			ft_reverse_rotate_two(stack_a, stack_b);
			ft_still_need_rr(stack_a, stack_b, "NT");
		}
		(*stack_a)->pos_node++;
		(*stack_b)->pos_target++;
	}
}

void	ft_operation(t_list **stack_a, t_list **stack_b)
{
	int	mid;
	int	mid2;

	mid = ft_cal_mid(ft_lstsize(*stack_a));
	mid2 = ft_cal_mid(ft_lstsize(*stack_b));
	if ((*stack_a)->pos_node < mid && (*stack_a)->pos_target < mid2)
		ft_both_top_mid(stack_a, stack_b);
	else if ((*stack_a)->pos_node >= mid && (*stack_a)->pos_target >= mid2)
		ft_both_bottom_mid(stack_a, stack_b);
	else
	{
		if ((*stack_a)->pos_node < mid)
			ft_still_need_r(stack_a, stack_b, "N");
		else if ((*stack_a)->pos_node >= mid)
			ft_still_need_rr(stack_a, stack_b, "N");
		if ((*stack_a)->pos_target < mid)
			ft_still_need_r(stack_a, stack_b, "T");
		else if ((*stack_a)->pos_target >= mid)
			ft_still_need_rr(stack_a, stack_b, "T");
	}
}
void	ft_turk_algo(t_list **stack_a, t_list **stack_b)
{
	int	len_stack;

	len_stack = ft_lstsize(*stack_a);
	if (len_stack <= 5)
	{
		ft_sort_five(stack_a, stack_b);
		return ;
	}
	else
	{
		ft_push(stack_a, stack_b, "AB");
		ft_push(stack_a, stack_b, "AB");
		ft_find_cheapest(stack_a, stack_b);
	}
}
