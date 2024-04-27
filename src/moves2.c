/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:00:48 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/27 12:08:06 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap_two(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a, 0);
	ft_swap(stack_b, 0);
	ft_putstr("ss\n", 1);
}

void	ft_rotate_two(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a, 0);
	ft_rotate(stack_b, 0);
	ft_putstr("rr\n", 1);
}

void	ft_reverse_rotate_two(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate(stack_a, 0);
	ft_reverse_rotate(stack_b, 0);
	ft_putstr("rrr\n", 1);
}
