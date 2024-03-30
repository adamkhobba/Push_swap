/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:22:35 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/19 20:46:10 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *current;
  t_list *twp;

  if (!lst || !del)
    return;
  current = *lst;
  while (current) {
    twp = current;
    current = current->next;
    ft_lstdelone(twp, del);
  }
  *lst = NULL;
}
