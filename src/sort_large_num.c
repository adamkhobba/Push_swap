/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:10:22 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/20 16:13:42 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int *ft_put_to_arr(t_list *stack, int *arr)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = stack;
    while(tmp)
    {
        arr[i] = tmp->data;
        i++;
        tmp = tmp->next;
    }
    return (arr);
}
int *ft_create_arr(t_list *stack)
{
    int *arr;
    int i;
    t_list *tmp;

    i = 0;
    tmp = stack;
    while(tmp)
    {
        i++;
        tmp = tmp->next;
    }
    arr = (int *)malloc(sizeof(int) * i);
    arr = ft_put_to_arr(stack, arr);
    return (arr);
}
int *ft_quik_sort(char *arr)
{
    int i;

    i = 0;
        
    return (arr);
}