#include "../include/push_swap.h"

int ft_push_a(t_list *stack_a, t_list *stack_b) {
  t_list *tmp;
  void *content;

  content = &stack_b->data;
  tmp = ft_lstnew(content);
  if (!stack_b)
    return (0);
  ft_lstadd_front(&stack_a, stack_b);
  return (1);
}
