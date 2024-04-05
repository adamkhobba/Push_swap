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
  int tmp;
  if (!*lst)
    return (0);
  tmp = (*lst)->data;
  (*lst)->data = (*lst)->next->data;
  (*lst)->next->data = tmp;
  return (1);
}

int ft_rotate(t_list **list)
{
  int tmp; 
  t_list *current;

  current = *list;
  tmp = (*list)->data;
  while(current->next) 
  {
    current = current->next;
  }
  (*list)->data = current->data;
  current->data = tmp;
  return (1);
}
