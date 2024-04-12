#include "../include/push_swap.h"

int ft_search_min(t_list **stack) {
  t_list *tmp;
  t_list *current;
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
