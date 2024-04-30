/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/30 16:28:32 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

void	ft_action_swap(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "sa", 2))
	ft_swap(stack_a, 0);
	else if (!ft_strncmp(move, "sb", 2))
		ft_swap(stack_b, 0);
	else if (!ft_strncmp(move, "ss", 2))
	{
		ft_swap(stack_a, 0);
		ft_swap(stack_b, 0);
	}
}

void	ft_action_rotate(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "ra", 2))
		ft_rotate(stack_a, 0);
	else if (!ft_strncmp(move, "rb", 2))
		ft_rotate(stack_b, 0);
	else if (!ft_strncmp(move, "rr", 2))
	{
		ft_rotate(stack_a, 0);
		ft_rotate(stack_b, 0);
	}
}

void	ft_action_reverse_rotate(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "rra", 3))
		ft_reverse_rotate(stack_a, 0);
	if (!ft_strncmp(move, "rrb", 3))
		ft_reverse_rotate(stack_b, 0);
	if (!ft_strncmp(move, "rrr", 3))
	{
		ft_reverse_rotate(stack_a, 0);
		ft_reverse_rotate(stack_b, 0);
	}
}

void	ft_action(t_list **stack_a, t_list **stack_b, char *move)
{
	if (!ft_strncmp(move, "pa", 2))
		ft_push(stack_b, stack_a, "HH");
	if (!ft_strncmp(move, "pb", 2))
		ft_push(stack_a, stack_b, "HH");
	ft_action_reverse_rotate(stack_a, stack_b, move);
	ft_action_swap(stack_a, stack_b, move);
	ft_action_rotate(stack_a, stack_b, move);
}