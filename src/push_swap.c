/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 15:53:07 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	char	**s;
	t_list	*b;

	b = NULL;
	a = NULL;
	s = NULL;
	if (ac < 2)
		return (0);
	if (!ft_check_av(ac, av) || !av[1][0])
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	s = split_input(ac, av + 1);
	if (!ft_all_checks(s))
	{
		ft_free(s, 0, 2);
		return (0);
	}
	a = create_stack_a(s);
	ft_free(s, 0, 2);
	ft_turk_algo(&a, &b);
	ft_lstclear(&a);
	return (0);
}
