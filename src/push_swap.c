/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/05 15:37:10 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  if (!ft_all_checks((av + 1), ac))
    return (1);
  top = create_stack_a(ac - 1, av);
  stack_a = top;
  printf("stack a\n");
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
  }
  printf("stack_a swaped\n");
  stack_a = ft_reverse_rotate(&stack_a);
  top = stack_a;
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
  }
  return (0);
}
