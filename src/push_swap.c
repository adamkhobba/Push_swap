/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/17 16:28:57 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_b;
	t_list	*stack_a;
	char	**s;

	stack_b = NULL;
	stack_a = NULL;
	if (ac < 2)
		return (1);
	s = split_input(ac, av + 1);
	if (!ft_all_checks(s))
		return (1);
	stack_a = create_stack_a(s);
	// stack_a = top;
	// printf("\nstack a\n");
	// while (top)
	// {
	// 	printf("%d\n", top->data);
	// 	top = top->next;
	// }
	ft_sort_five(&stack_a, &stack_b);
	// printf("stack a after\n");
	// top = stack_a;
	// while (top) {
	//   printf("%d\n", top->data);
	//   top = top->next;
	// }
	return (0);
}
