#include "../include/push_swap.h"

t_list *push_stack(t_list **lst, int n) {
  t_list *node;

  node = ft_create_node(n);
  ft_lstadd_front(lst, node);
  return (node);
}

t_list *ft_create_node(int nbr) {
  t_list *node;

  node = malloc(sizeof(t_list));
  node->data = nbr;
  node->next = NULL;
  return node;
}

t_list *create_stack_a(int ac, char **av) {
  int bottom;
  t_list *lst;

  bottom = ft_atoi(av[ac]);
  lst = ft_create_node(bottom);
  while (--ac) {
    lst = push_stack(&lst, ft_atoi(av[ac]));
  }
  return (lst);
}
