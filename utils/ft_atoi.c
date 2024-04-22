/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:54:32 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/20 19:27:03 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long ft_atoi(const char *nptr) {
  long i;
  long n;
  long f;

  i = 0;
  n = 0;
  f = 1;
  while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
    i++;
  if (nptr[i] == '-' || nptr[i] == '+') {
    if (nptr[i] == '-')
      f = f * -1;
    i++;
  }
  while (nptr[i] >= '0' && nptr[i] <= '9') {
    n = n * 10 + (((char *)nptr)[i++] - 48);
  }
  return (n * f);
}
