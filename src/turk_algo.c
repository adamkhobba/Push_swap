#include "../include/push_swap.h"

void ft_push_tow(t_list **stack_a, t_list **stack_b) {
  ft_push(stack_a, stack_b, "AB");
  ft_push(stack_a, stack_b, "AB");
}

void ft_turk_algo(t_list **stack_a, t_list **stack_b) {
  int pos_min;
  int pos_max;

  ft_push_tow(stack_a, stack_b);
  pos_min = ft_search_min(*stack_b);
  pos_max = ft_search_max(*stack_b);
}
