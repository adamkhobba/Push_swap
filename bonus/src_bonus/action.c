/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/03 06:33:37 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

void	ft_action_swap(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "sa\n", -1))
		ft_swap(stack_a, 0);
	else if (!ft_strncmp(move, "sb\n", -1))
		ft_swap(stack_b, 0);
	else if (!ft_strncmp(move, "ss\n", -1))
	{
		ft_swap(stack_a, 0);
		ft_swap(stack_b, 0);
	}
}

void	ft_action_rotate(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "ra\n", -1))
		ft_rotate(stack_a, 0);
	else if (!ft_strncmp(move, "rb\n", -1))
		ft_rotate(stack_b, 0);
	else if (!ft_strncmp(move, "rr\n", -1))
	{
		ft_rotate(stack_a, 0);
		ft_rotate(stack_b, 0);
	}
}

void	ft_action_reverse_rotate(t_list **stack_a, t_list **stack_b, char *move)
{
	if (ft_strncmp(move, "rra\n", -1) == 0)
		ft_reverse_rotate(stack_a, 0);
	else if (!ft_strncmp(move, "rrb\n", -1))
		ft_reverse_rotate(stack_b, 0);
	else if (!ft_strncmp(move, "rrr\n", -1))
	{
		ft_reverse_rotate(stack_a, 0);
		ft_reverse_rotate(stack_b, 0);
	}
}

void	ft_action(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "pa\n", -1))
		ft_push(stack_b, stack_a, "HH");
	if (!ft_strncmp(move, "pb\n", -1))
		ft_push(stack_a, stack_b, "HH");
	ft_action_rotate(stack_a, stack_b, move);
	ft_action_swap(stack_a, stack_b, move);
	ft_action_reverse_rotate(stack_a, stack_b, move);
}
