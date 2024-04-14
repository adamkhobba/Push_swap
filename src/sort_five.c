#include "../include/push_swap.h"
#include <stdio.h>

int ft_search_min(t_list **stack) {
  t_list *tmp;
  int counter;
  int min;

  tmp = *stack;
  counter = 1;
  if (!*stack)
    return (0);
  min = tmp->data;
  while (tmp) {
    if (tmp->data < min)
      min = tmp->data;
    tmp = tmp->next;
  }
  tmp = *stack;
  while (tmp) {
    if (min == tmp->data)
      return (counter);
    counter++;
    tmp = tmp->next;
  }
  return (counter);
}

void ft_sort_three(t_list **stack) {
  if ((*stack)->data >= (*stack)->next->data)
    ft_swap(stack);
  if ((*stack)->data >= (*stack)->next->next->data) {
    ft_reverse_rotate(stack);
  }
}

void ft_sort_five(t_list **stack_a, t_list **stack_b) {
  ft_algo_of_five(stack_a, stack_b);
  ft_sort_three(stack_a);
}

void ft_algo_of_five(t_list **stack_a, t_list **stack_b) {
  int list_size;
  int positon;

  if (!*stack_a)
    return;
  list_size = ft_lstsize(*stack_a);
  while (list_size > 3) {
    positon = ft_search_min(stack_a);
    while (positon != 1) {
      if (positon == 2)
        ft_swap(stack_a);
      else
        ft_reverse_rotate(stack_a);
      positon = ft_search_min(stack_a);
    }
    ft_push(stack_a, stack_b);
    list_size = ft_lstsize(*stack_a);
  }
  return;
}
