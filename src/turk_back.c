/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:17:28 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:22:01 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_init_target(t_pos *pos, int needer, t_list **stack_b)
{
	pos->target = ft_search_target(*stack_b, needer, 'S');
	if (pos->target == -1)
		pos->target = ft_search_min_max(*stack_b, 'M');
	return (pos->target);
}

void	ft_still_need_rr(t_list **stack_a, t_list **stack_b, t_pos *pos,
		char const *option)
{
	if (option[0] == 'N')
	{
		while (pos->node < pos->len)
		{
			ft_reverse_rotate(stack_a, 'A');
			pos->node++;
		}
	}
	if (option[1] == 'T')
	{
		while (pos->target < pos->len2)
		{
			ft_reverse_rotate(stack_b, 'B');
			pos->target++;
		}
	}
}

void	ft_still_need_r(t_list **stack_a, t_list **stack_b, t_pos *pos,
		const char *option)
{
	if (option[0] == 'N')
	{
		while (pos->node)
		{
			ft_rotate(stack_a, 'A');
			pos->node--;
		}
	}
	if (option[1] == 'T')
	{
		while (pos->target)
		{
			ft_rotate(stack_b, 'B');
			pos->target--;
		}
	}
}

void	ft_put_min_top(t_list **stack_a)
{
	int	pos_min;
	int	mid;
	int	len;

	len = ft_lstsize(*stack_a);
	mid = ft_cal_mid(len);
	pos_min = ft_search_min_max(*stack_a, 'm');
	if (pos_min)
	{
		if (pos_min < mid)
		{
			while (pos_min--)
				ft_rotate(stack_a, 'A');
		}
		else
		{
			while (pos_min < len)
			{
				ft_reverse_rotate(stack_a, 'A');
				pos_min++;
			}
		}
	}
}

void	ft_turk_back(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_pos	ppos;
	t_pos	*pos;

	pos = &ppos;
	tmp = *stack_b;
	pos->target = 0;
	pos->node = 0;
	while (tmp)
	{
		pos->node = ft_search_target(*stack_a, tmp->data, 'B');
		if (pos->node == -1)
			pos->node = ft_search_min_max(*stack_a, 'm');
		ft_operation(stack_a, stack_b, pos, 'B');
		tmp = *stack_b;
	}
}
