/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:44:46 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 15:45:55 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

void	ft_multi_action(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!ft_check_move(line))
		{
			ft_putstr("Error\n", 2);
			free(line);
			exit(1);
		}
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
	if (ac < 2)
		return (0);
	if (!ft_check_av(ac, av) || !av[1][0])
	{
		ft_putstr("Error\n", 2);
		return (0);
	}s = split_input(ac, av + 1);
	if (!ft_parsing_bonus(s))
	{
		ft_free(s, 0, 2);
		return (0);
	}
	stack_a = create_stack_a(s);
	ft_multi_action(&stack_a, &stack_b);
	if (ft_is_ok_ko(stack_a, s) == 1)
		ft_putstr("OK\n", 1);
	else if (ft_is_ok_ko(stack_a, s) == 0)
		ft_putstr("KO\n", 1);
	ft_free(s, 0, 2);
	ft_lstclear(&stack_a);
	return (0);
}
