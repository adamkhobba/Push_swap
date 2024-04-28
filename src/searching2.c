#include "../include/push_swap.h"

int	ft_search_min(t_list *stack)
{
	t_list	*tmp;
	int		pos_min;
	int		min;

	tmp = stack;
	pos_min = -1;
	if (!stack)
		return (-1);
	min = tmp->data;
	while (tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		pos_min++;
		if (min == tmp->data)
			return (pos_min);
		tmp = tmp->next;
	}
	return (-1);
}
int ft_search_val_max(t_list *stack)
{
	t_list	*tmp;
	int		max;

	tmp = stack;
	if (!stack)
		return (-1);
	max = tmp->data;
	while (tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}

int	ft_search_max(t_list *stack)
{
	int		pos_max;
	t_list	*tmp;
	int		max;

	tmp = stack;
	pos_max = -1;
	if (!stack)
		return (-1);
	max = tmp->data;
	while (tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		pos_max++;
		if (max == tmp->data)
			return (pos_max);
		tmp = tmp->next;
	}
	return (-1);
}

int	ft_search_min_max(t_list *stack, char c)
{
	int	pos_Mn;

	pos_Mn = -1;
	if (c == 'M')
		pos_Mn = ft_search_max(stack);
	else if (c == 'm')
		pos_Mn = ft_search_min(stack);
	return (pos_Mn);
}
