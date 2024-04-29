/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:01:37 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:18:18 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_init_var(t_pos *pos, t_list *stack_a, t_list *stack_b)
{
	pos->len = ft_lstsize(stack_a);
	pos->len2 = ft_lstsize(stack_b);
	pos->mid = ft_cal_mid(ft_lstsize(stack_a));
	pos->mid2 = ft_cal_mid(ft_lstsize(stack_b));
}
