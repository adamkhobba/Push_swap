#include "../include/push_swap.h"

int main(int ac, char **av) {
  t_list *top;

  if (ac < 2)
    return (1);
  top = create_stack_a(ac - 1, av);
  // top = ft_create_node(ft_atoi(av[ac - 1]));
  while (top) {
  printf("%d\n", top->data);
  top = top->next;
  }
  return 0;
}
