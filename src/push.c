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

int ft_swap(t_list **lst) {
  t_list *tmp;

  if (!*lst)
    return (0);
  tmp = *lst;
  *lst = (*lst)->next;
  (*lst)->next = tmp;
  return (1);
}
