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

// int main(int ac, char **av) {
//   char **s;
//   int i;
//
//   i = 0;
//   (void)ac;
//   s = split_input(ac, av + 1);
//   while (s[i]) {
//     printf("%s\n", s[i]);
//     i++;
//   }
// }

int main(int ac, char **av) {
  t_list *top;
  t_list *stack_b;
  t_list *stack_a;
  char **s;

  stack_b = NULL;
  if (ac < 2)
    return (1);

  s = split_input(ac, av + 1);
  if (!ft_all_checks(s))
    return (1);
  top = create_stack_a(s);
  stack_a = top;
  printf("stack a\n");
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
  }
  ft_sort_five(&stack_a, &stack_b);
  printf("stack a after\n");
  top = stack_a;
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
    sleep(1);
  }
  printf("stack b \n");
  top = stack_b;
  while (top) {
    printf("%d\n", top->data);
    top = top->next;
  }
  return (0);
}
