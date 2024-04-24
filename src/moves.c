/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:36:38 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/20 15:40:51 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_push(t_list **from, t_list **to, char *s) {
  t_list *tmp;

  if (!*from)
    return (0);
  tmp = (*from);
  (*from) = (*from)->next;
  push_stack(to, tmp->data);
  if (!ft_strncmp(s, "BA", 2))
    ft_putstr("pa\n", 1);
  else if (!ft_strncmp(s, "AB", 2))
    ft_putstr("pb\n", 1);
  free(tmp);
  return (1);
}

int ft_swap(t_list **lst, char c) {
  int tmp;

  if (!*lst)
    return (0);
  tmp = (*lst)->data;
  (*lst)->data = (*lst)->next->data;
  (*lst)->next->data = tmp;
  if (c == 'A')
    ft_putstr("sa\n", 1);
  else if (c == 'B')
    ft_putstr("sb\n", 1);
  else if (c == 'R')
    ft_putstr("s", 1);
  else
    ft_putstr("s\n", 1);
  return (1);
}

t_list *ft_rotate(t_list **list, char c) {
  t_list *tmp;
  t_list *current;

  if (!*list)
    return (NULL);
  tmp = (*list);
  current = (*list)->next;
  *list = (*list)->next;
  while (current->next)
    current = current->next;
  current->next = tmp;
  tmp->next = NULL;
  if (c == 'A')
    ft_putstr("ra\n", 1);
  else if (c == 'B')
    ft_putstr("rb\n", 1);
  else if (c == 'R')
    ft_putstr("r", 1);
  else
    ft_putstr("r\n", 1);
  return (*list);
}

t_list **ft_reverse_rotate(t_list **list, char c) {
  t_list *tmp;
  t_list *current;
  t_list *var;

  if (!*list)
    return (NULL);
  tmp = (*list);
  current = (*list)->next;
  while (current->next) {
    var = current;
    current = current->next;
  }
  *list = current;
  current->next = tmp;
  var->next = NULL;
  if (c == 'A')
    ft_putstr("rra\n", 1);
  else if (c == 'B')
    ft_putstr("rrb\n", 1);
  else if (c == 'R')
    ft_putstr("r", 1);
  else
    ft_putstr("rr\n", 1);
  return (list);
}
