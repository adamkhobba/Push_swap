#include "../include/push_swap.h"

int main(int ac, char **av) {
  t_list *top;

  if (ac < 2)
    return (1);
  top = create_stack_a(ac, av);
  // while (top) {
  // printf("%d", top->data);
  // top = top->next;
  // }
  return 0;
}
