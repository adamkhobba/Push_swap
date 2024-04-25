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

void ft_operation(t_list **stack_a, t_list **stack_b) {
  int ;


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
