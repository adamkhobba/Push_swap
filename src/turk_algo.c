/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:03:17 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/28 09:13:42 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_cal_mid(int len) {
  int mid;

  if (len % 2)
    mid = len / 2;
  else {
    if (len > 2)
      mid = len / 2 - 1;
    else
      mid = len - 1;
  }
  return (mid);
}

void ft_both_top_mid(t_list **stack_a, t_list **stack_b, t_pos *pos) {
  while (pos->node && pos->target) {
    if (pos->node && pos->target) {
      ft_rotate_two(stack_a, stack_b);
      pos->node--;
      pos->target--;
    }
    if (!pos->node || !pos->target) {
      ft_still_need_r(stack_a, stack_b, pos, "NT");
      break;
    }
  }
}

void ft_both_bottom_mid(t_list **stack_a, t_list **stack_b, t_pos *pos) {
  while (pos->node < pos->len || pos->target < pos->len2) {
    ft_reverse_rotate_two(stack_a, stack_b);
    pos->node++;
    pos->target++;
  }
  if (pos->node >= pos->len || pos->target >= pos->len2)
    ft_still_need_rr(stack_a, stack_b, pos, "NT");
}

void ft_operation(t_list **stack_a, t_list **stack_b, t_pos *pos, char option) {
  int mid;
  int mid2;

  pos->len = ft_lstsize(*stack_a);
  pos->len2 = ft_lstsize(*stack_b);
  mid = ft_cal_mid(ft_lstsize(*stack_a));
  mid2 = ft_cal_mid(ft_lstsize(*stack_b));
  if (pos->node < mid && pos->target < mid2)
    ft_both_top_mid(stack_a, stack_b, pos); else if (pos->node >= mid && pos->target >= mid2) {
    if (mid2 == 0)
      ft_still_need_rr(stack_a, stack_b, pos, "N");
    else
      ft_both_bottom_mid(stack_a, stack_b, pos);
  } else {
    if (pos->node < mid)
      ft_still_need_r(stack_a, stack_b, pos, "N");
    else if (pos->node >= mid)
      ft_still_need_rr(stack_a, stack_b, pos, "N");
    if (pos->target < mid)
      ft_still_need_r(stack_a, stack_b, pos, "IT");
    else if (pos->target >= mid)
      ft_still_need_rr(stack_a, stack_b, pos, "IT");
  }
  if (option == 'A')
    ft_push(stack_a, stack_b, "AB");
  else if (option == 'B')
    ft_push(stack_b, stack_a, "BA");
}

void ft_turk_algo(t_list **stack_a, t_list **stack_b) {
  int len_stack;

  len_stack = ft_lstsize(*stack_a);
  if (len_stack <= 5) {
    ft_sort_five(stack_a, stack_b);
    return;
  } else {
    ft_push(stack_a, stack_b, "AB");
    ft_push(stack_a, stack_b, "AB");
    ft_turk_push_b(stack_a, stack_b);
    ft_turk_back(stack_a, stack_b);
    ft_put_min_top(stack_a);
  }
}
