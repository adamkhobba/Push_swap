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

t_list	*create_stack_a(int ac, char **av)
{
	int		bottom;
	t_list	*stack_a;
	void	*tmp;

	tmp = &bottom;
	bottom = ft_atoi(av[ac]);
	stack_a = ft_lstnew(tmp);
	while (--ac)
		stack_a = push_stack(&stack_a, ft_atoi(av[ac]));
	return (stack_a);
}
