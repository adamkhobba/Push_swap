/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:37:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/20 15:37:38 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av) {
  // t_list *stack_b;
  // t_list *stack_a;
  char **s;

  // stack_b = NULL;
  // stack_a = NULL;
  if (ac < 2)
    return (1);
  s = split_input(ac, av + 1);
  if (!ft_all_checks(s))
    return (1);
  // stack_a = create_stack_a(s);
  ft_free(s, 0, 2);
  // t_list *top = stack_a;
  // stack_a = top;
  // printf("\nstack a\n");
  // while (top) {
  //   printf("%d\n", top->data);
  //   top = top->next;
  // }
  // ft_sort_five(&stack_a, &stack_b);
  // int val = ft_search_max(stack_a);
  // printf("\npos_val = %d", val);
  // printf("\nstack a after\n");
  // top = stack_a;
  // while (top) {
  //   printf("%d\n", top->data);
  //   top = top->next;
  // }
  // ft_lstclear(&stack_a);
  return (0);
}
