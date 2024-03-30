/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:33:46 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/19 20:45:48 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
  if (!lst || !del)
    return;
  del(&lst->data);
  free(lst);
}
