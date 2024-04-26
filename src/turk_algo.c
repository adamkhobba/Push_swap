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

void	ft_still_need_rr(t_list **stack_a, t_list **stack_b, int pos_node,
		char const *option)
{
  int pos_target;

  pos_target = (*stack_a)->pos_target;
	if (option[0] == 'N')
	{
		while (pos_node < ft_lstsize(*stack_a))
		{
			ft_reverse_rotate(stack_a, 'A');
			pos_node++;
		}
	}
	if (option[1] == 'T')
	{
		while (pos_target < ft_lstsize(*stack_b))
		{
			ft_reverse_rotate(stack_b, 'B');
			pos_target++;
		}
	}
}

void	ft_still_need_r(t_list **stack_a, t_list **stack_b, int pos_node,
		const char *option)
{
  int pos_target;

  pos_target = (*stack_a)->pos_target;
	if (option[0] == 'N')
	{
		while (pos_node)
		{
			ft_rotate(stack_a, 'A');
			pos_node--;
		}
	}
	if (option[1] == 'T')
	{
		while (pos_target)
		{
			ft_rotate(stack_b, 'B');
			pos_target--;
		}
	}
}

void	ft_both_top_mid(t_list **stack_a, t_list **stack_b, int pos_node)
{
  int pos_target;

  pos_target = (*stack_a)->pos_target;
	while (pos_node || pos_target)
	{
		if (pos_node && pos_target)
		{
			ft_rotate_two(stack_a, stack_b);
			pos_node--;
			pos_target--;
		}
		if (!pos_node || !pos_target)
		{
			ft_still_need_r(stack_a, stack_b, pos_node, "NT");
			break ;
		}
	}
}

void	ft_both_bottom_mid(t_list **stack_a, t_list **stack_b, int pos_node)
{
  int pos_target;

  pos_target = (*stack_a)->pos_target;
	while (pos_node < ft_lstsize(*stack_a)
		|| pos_target < ft_lstsize(*stack_b))
	{
		printf("tagert =%d\n", pos_target);
		if (pos_node < ft_lstsize(*stack_a)
			&& pos_target < ft_lstsize(*stack_b))
		{
      ft_reverse_rotate_two(stack_a, stack_b);
			pos_node++;
			pos_target++;
		}
		printf("tagert =%d\n", pos_target);
		if (pos_node >= ft_lstsize(*stack_a)
			|| pos_target >= ft_lstsize(*stack_b))
		{
			ft_still_need_rr(stack_a, stack_b, pos_node, "NT");
			break ;
		}
	}
}

void	ft_operation(t_list **stack_a, t_list **stack_b, int pos_node,
		char option)
{
	int	mid;
	int	mid2;

	mid = ft_cal_mid(ft_lstsize(*stack_a));
	mid2 = ft_cal_mid(ft_lstsize(*stack_b));
	if (pos_node < mid && (*stack_a)->pos_target < mid2)
		ft_both_top_mid(stack_a, stack_b, pos_node);
	else if (pos_node >= mid && (*stack_a)->pos_target >= mid2)
		ft_both_bottom_mid(stack_a, stack_b, pos_node);
	else
	{
		if (pos_node < mid)
			ft_still_need_r(stack_a, stack_b, pos_node, "N");
		else if (pos_node >= mid)
			ft_still_need_rr(stack_a, stack_b, pos_node, "N");
		if ((*stack_a)->pos_target < mid)
			ft_still_need_r(stack_a, stack_b, pos_node, "IT");
		else if ((*stack_a)->pos_target >= mid)
			ft_still_need_rr(stack_a, stack_b, pos_node, "IT");
	}
	if (option == 'A')
		ft_push(stack_a, stack_b, "AB");
	else if (option == 'B')
		ft_push(stack_b, stack_a, "BA");
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
		ft_turk_push_b(stack_a, stack_b);
		// ft_turk_back(stack_a, stack_b);
	}
}
