#include "../include/push_swap.h"
void ft_del(void *data) { free(data); }

int ft_push_a(t_list *stack_a, t_list *stack_b) {
  t_list *tmp;
  void *content;

  content = &stack_b->data;
  tmp = ft_lstnew(content);
  ft_lstdelone(stack_b, ft_del);
  if (!stack_b)
    return (0);
  ft_lstadd_front(&stack_a, tmp);
  return (1);
}

int ft_push_b(t_list *stack_a, t_list *stack_b) {
  t_list *tmp;
  void *content;

  content = &stack_a->data;
  tmp = ft_lstnew(content);
  ft_lstdelone(stack_a, ft_del);
  if (!stack_a)
    return (0);
  ft_lstadd_front(&stack_b, tmp);
  return (1);
  return (1);
}
