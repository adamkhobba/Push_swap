/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:44:46 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/03 06:37:08 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

void	ft_multi_action(t_list **stack_a, t_list **stack_b, char **s)
{
	char	*line;

	line = NULL;
	*stack_a = create_stack_a(s);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
		{
			free(line);
			break ;
		}
		if (!ft_check_move(line))
		{
			ft_putstr("Error\n", 2);
			free(line);
			exit(1);
		}
		ft_action(stack_a, stack_b, line);
		free(line);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	**s;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (!ft_check_av(ac, av) || !av[1][0])
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	s = split_input(ac, av + 1);
	if (!ft_parsing_bonus(s))
		return (0);
	ft_multi_action(&a, &b, s);
	if (ft_is_ok_ko(a, s) == 1)
		ft_putstr("OK\n", 1);
	else if (ft_is_ok_ko(a, s) == 0)
		ft_putstr("KO\n", 1);
	ft_free(s, 0, 2);
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}
