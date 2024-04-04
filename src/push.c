#include "../include/push_swap.h"

int ft_push(t_list **from, t_list **to) {
  t_list *tmp;

  if (!*from)
    return (0);
  tmp = (*from);
  (*from) = (*from)->next;
  push_stack(to, tmp->data);
  free(tmp);
  return (1);
}
