/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:17:28 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/26 11:09:35 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_turk_back(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	tmp = *stack_b;
	while (tmp)
	{
		(*stack_a)->pos_target = ft_search_target(*stack_a, tmp->data, 'B');
		if ((*stack_a)->pos_target == -1)
			(*stack_a)->pos_target = ft_search_min_max(*stack_a, 'm');
		ft_operation(stack_a, stack_b, 0, 'B');
		tmp = tmp->next;
		// tmp = *stack_b;
	}
}