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

int ft_search_max(t_list *stack) {

  int pos_max;
  t_list *tmp;
  int max;

  tmp = stack;
  pos_max = 0;
  if (!stack)
    return (-1);
  max = tmp->data;
  while (tmp) {
    if (tmp->data > max)
      max = tmp->data;
    tmp = tmp->next;
  }
  tmp = stack;
  while (tmp) {
    if (max == tmp->data)
      return (pos_max);
    pos_max++;
    tmp = tmp->next;
  }
  return (pos_max);
}

int ft_search_min_max(t_list *stack, char c) {
  int pos_Mn;

  if (c == 'M')
    pos_Mn = ft_search_max(stack);
  else if (c == 'm')
    pos_Mn = ft_search_min(stack);
  return (pos_Mn);
}
