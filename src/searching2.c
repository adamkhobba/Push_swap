#include "../include/push_swap.h"

int ft_neg1_case(t_list *stack) {
  while (stack) {
    if (stack->data == -1)
      return (1);
    stack = stack->next;
  }
  return (0);
}

int ft_search_min(t_list *stack) {
  t_list *tmp;
  int counter;
  int min;

  tmp = stack;
  counter = 0;
  if (!stack)
    return (-1);
  min = tmp->data;
  while (tmp) {
    if (tmp->data < min)
      min = tmp->data;
    tmp = tmp->next;
  }
  tmp = stack;
  while (tmp) {
    if (min == tmp->data)
      return (counter);
    counter++;
    tmp = tmp->next;
  }
  return (counter);
}
