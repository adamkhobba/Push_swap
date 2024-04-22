#include "../include/push_swap.h"

int ft_init_searching(t_list *stack, int needer, char option) {
  int init_val;

  init_val = -1;
  if (option == 'S')
    while (stack) {
      if (stack->data < needer)
        return (stack->data);
      stack = stack->next;
    }
  else if (option == 'B')
    while (stack) {
      if (stack->data > needer)
        return (stack->data);
      stack = stack->next;
    }
  return (init_val);
}

int ft_search_closet_bigger(t_list *stack, int needer) {
  int pos_bigger;
  int bigger;
  t_list *tmp;

  pos_bigger = -1;
  bigger = ft_init_searching(stack, needer, 'B');
  tmp = stack;
  while (stack) {
    if (stack->data > needer && stack->data <= bigger)
      bigger = stack->data;
    stack = stack->next;
  }
  while (tmp) {
    if (tmp->data == bigger)
      return (pos_bigger);
    pos_bigger++;
    tmp = tmp->next;
  }
  return (pos_bigger);
}

int ft_search_closet_smaller(t_list *stack, int needer) {
  int pos_smaller;
  int smaller;
  t_list *tmp;

  pos_smaller = -1;
  smaller = ft_init_searching(stack, needer, 'S');
  if (smaller == -1)
    return (pos_smaller);
  tmp = stack;
  while (stack) {
    if (stack->data < needer && stack->data >= smaller)
      smaller = stack->data;
    stack = stack->next;
  }
  printf("\n*%d*", smaller);
  while (tmp) {
    pos_smaller++;
    if (tmp->data == smaller)
      return (pos_smaller);
    tmp = tmp->next;
  }
  return (pos_smaller);
}

int ft_search_target(t_list *stack, int needer, char c) {
  int pos_target;

  pos_target = 0;
  if (!stack)
    return (-1);
  if (c == 'S')
    pos_target = ft_search_closet_smaller(stack, needer);
  else if (c == 'B')
    pos_target = ft_search_closet_bigger(stack, needer);
  return (pos_target);
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
