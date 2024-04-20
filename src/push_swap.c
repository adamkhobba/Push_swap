/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/20 10:52:53 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_free(char **s, int len, int option)
{
	int i;

	i = 0;
	if (option == 1)
	{
		while (i < len)
		{
			free(s[i]);
			i++;
		}
	}
	else if (option == 2)
	{
		while (s[i])
		{
			free(s[i]);
			i++;
		}
	}
	free(s);
}
void ft_del(void *a)
{
	free(a);
}

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
	ft_free(s, 0, 2);
	// stack_a = top;
	// printf("\nstack a\n");
	// while (top)
	// {
	// 	printf("%d\n", top->data);
	// 	top = top->next;
	// }
	ft_sort_five(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	// top = stack_a;
	// while (top) {
	//   printf("%d\n", top->data);
	//   top = top->next;
	// }
	// system("leaks push_swap");
	return (0);
}