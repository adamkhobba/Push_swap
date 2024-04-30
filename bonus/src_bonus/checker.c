/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:44:46 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/30 16:17:00 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

void	ft_multi_action(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		ft_action(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**s;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2 || !av[1][0])
		return (1);
	s = split_input(ac, av + 1);
	if (!ft_all_checks(s))
	{
		ft_free(s, 0, 2);
		return (1);
	}
	stack_a = create_stack_a(s);
	t_list *tmp;

	tmp = stack_a;
	while(tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	// ft_reverse_rotate(&stack_a, 0);
	ft_multi_action(&stack_a, &stack_b);

	tmp = stack_a;
	while(tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	if (ft_is_ok_ko(stack_a, s) == 1)
        ft_putstr("OK\n", 1);
    else
	{
        ft_putstr("KO\n", 1);
	}
	ft_free(s, 0, 2);
	ft_lstclear(&stack_a);
	return (0);
}
