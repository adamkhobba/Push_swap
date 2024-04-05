#include "../include/push_swap.h"
#include <stdio.h>

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
  printf("stack_a swaped\n");
  ft_swap(&stack_a);
  top = stack_a;
  // while (top) {
  printf("%d\n", top->data);
  top = top->next;
  printf("%d\n", top->data);
  top = top->next;
  printf("%d\n", top->data);
  top = top->next;
  printf("%d\n", top->data);
  // }
  return (0);
}
