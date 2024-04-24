#include "../include/push_swap.h"

void ft_push_tow(t_list **stack_a, t_list **stack_b) {
  ft_push(stack_a, stack_b, "AB");
  ft_push(stack_a, stack_b, "AB");
}

int ft_len_return(int len) {
  int mid;

  if (len % 2)
    mid = len / 2 + 1;
  else
    mid = len / 2;
  return (mid);
}
void ft_go_top(t_list **stackk, char c) {
  int mid;
  int len_a;

  mid = ft_len_return(ft_lstsize(*stack_a));
  len_a = ft_lstsize(*stack_a);
  if (pos_node < mid) {
    while (pos_node) {
      ft_rotate(stack_a, 'A');
      pos_node--;
    }
  } else {
    while (pos_node < len_a) {
      ft_reverse_rotate(stack_a, 'A');
      pos_node++;
      if (pos_node == len_a)
        ft_reverse_rotate(stack_a, 'A');
    }
  }
}

void ft_operation(t_list **stack_a, t_list **stack_b, int pos_target,
                  int pos_node) {}

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
