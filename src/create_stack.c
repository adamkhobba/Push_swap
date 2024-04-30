/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:36:24 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/30 14:22:01 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*push_stack(t_list **lst, int n)
{
	t_list	*node;
	void	*tmp;

	tmp = &n;
	node = ft_lstnew(tmp);
	ft_lstadd_front(lst, node);
	return (node);
}

t_list	*create_stack_a(char **s)
{
	int		bottom;
	t_list	*stack_a;
	void	*tmp;
	int		index;

	tmp = &bottom;
	index = ft_count_strs(s);
	bottom = ft_atoi(s[index - 1]);
	stack_a = ft_lstnew(tmp);
	index -= 2;
	while (index >= 0)
		stack_a = push_stack(&stack_a, ft_atoi(s[index--]));
	return (stack_a);
}
