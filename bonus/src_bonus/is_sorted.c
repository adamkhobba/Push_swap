/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:22:42 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 11:07:25 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

int	ft_is_sorted(t_list *stack_a)
{
	t_list	*tmp;
	int		counter;

	tmp = stack_a;
	counter = 1;
	while (tmp && tmp->next)
	{
		if (tmp->data < tmp->next->data)
			counter++;
		tmp = tmp->next;
	}
	if (counter == ft_lstsize(stack_a))
		return (1);
	return (0);
}

int	ft_check_num_num(t_list *stack_a, char **s)
{
	int	len_s;
	int	len_stack;

	len_s = ft_count_strs(s);
	len_stack = ft_lstsize(stack_a);
	if (len_s != len_stack)
		return (0);
	return (1);
}

int	ft_is_ok_ko(t_list *stack_a, char **s)
{
	if (ft_check_num_num(stack_a, s) == 0)
		return (0);
	if (ft_is_sorted(stack_a) == 0)
		return (0);
	return (1);
}
