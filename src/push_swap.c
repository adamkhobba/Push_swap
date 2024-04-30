/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/30 09:49:16 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	char	**s;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	s = NULL;
	if (ac < 2 || !av[1][0])
		return (1);
	s = split_input(ac, av + 1);
	if (!ft_all_checks(s))
	{
		ft_free(s, 0, 2);
		return (1);
	}
	stack_a = create_stack_a(s);
	ft_free(s, 0, 2);
	ft_turk_algo(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
