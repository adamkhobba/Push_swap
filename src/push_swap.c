#include "../include/push_swap.h"

int main(int ac, char **av) {
  t_list *top;
  t_list *stack_b;
  t_list *stack_a;
  t_list *tmp;

  stack_b = NULL;
  if (ac < 2)
    return (1);
  top = create_stack_a(ac - 1, av);
  stack_a = top;
  printf("stack a\n");
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
  }
  ft_push(&stack_a, &stack_b);
  printf("stack b\n");
  tmp = stack_b;
  while (tmp) {
    printf("%d\n", tmp->data);
    tmp = tmp->next;
  }
  printf("stack a again\n");
  tmp = stack_a;
  while (tmp) {
    printf("%d\n", tmp->data);
    tmp = tmp->next;
  }
  return (0);
}
