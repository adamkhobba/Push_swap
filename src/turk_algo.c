#include "../include/push_swap.h"

void ft_push_tow(t_list **stack_a, t_list **stack_b) {
  ft_push(stack_a, stack_b, "AB");
  ft_push(stack_a, stack_b, "AB");
}

int ft_find_one_const(int len, int pos, int mid) {
  int cost;

  if (pos < mid)
    cost = pos;
  else
    cost = len - pos;
  return (cost);
}

int ft_cal_cost(int pos_target, int pos_node, int len1, int len2) {
  int cost;
  int mid_1;
  int mid_2;

  if (len1 % 2)
    mid_1 = len1 / 2 + 1;
  else
    mid_1 = len1 / 2;
  if (len2 % 2)
    mid_2 = len2 / 2 + 1;
  else
    mid_2 = len2 / 2;
  cost = ft_find_one_const(len1, pos_node, mid_1) +
         ft_find_one_const(len2, pos_target, mid_2);
  return (cost);
}

void ft_find_cheapest(t_list **stack_a, t_list **stack_b, int len_stack) {
  t_list *tmp;
  int cost;
  int pos_node;
  int pos_target;

  tmp = *stack_a;
  pos_node = -1;
  while (tmp) {
    pos_node++;
    pos_target = ft_search_target(*stack_b, tmp->data, 'S');
    if (pos_target == -1)
      if (!ft_neg1_case(tmp))
        pos_target = ft_search_max(*stack_b);
    cost = ft_cal_cost(pos_target, pos_node, ft_lstsize(*stack_a),
                       ft_lstsize(*stack_b));
    tmp = tmp->next;
  }
}

void ft_turk_algo(t_list **stack_a, t_list **stack_b) {
  int len_stack;

  ft_push_tow(stack_a, stack_b);
  len_stack = ft_lstsize(*stack_a);
  if (len_stack <= 5) {
    ft_sort_five(stack_a, stack_b);
    return;
  } else
    ft_find_cheapest(stack_a, stack_b, len_stack);
}
