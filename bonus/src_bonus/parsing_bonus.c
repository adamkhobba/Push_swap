/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:02:57 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/02 09:08:13 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

int	ft_chech_rr(char *move, int *checker)
{
	if (!ft_strncmp(move, "ra\n", -1))
		(*checker)++;
	if (!ft_strncmp(move, "rb\n", -1))
		(*checker)++;
	if (!ft_strncmp(move, "rr\n", -1))
		(*checker)++;
	if (!ft_strncmp(move, "rra\n", -1))
		(*checker)++;
	if (!ft_strncmp(move, "rrb\n", -1))
		(*checker)++;
	if (!ft_strncmp(move, "rrr\n", -1))
		(*checker)++;
	return (1);
}

int	ft_check_move(char *move)
{
	int	checker;

	checker = 0;
	if (!ft_strncmp(move, "sa\n", -1))
		checker++;
	if (!ft_strncmp(move, "sb\n", -1))
		checker++;
	if (!ft_strncmp(move, "ss\n", -1))
		checker++;
	if (!ft_strncmp(move, "pa\n", -1))
		checker++;
	if (!ft_strncmp(move, "pb\n", -1))
		checker++;
	ft_chech_rr(move, &checker);
	if (!checker)
		return (0);
	return (1);
}

int	ft_parsing_bonus(char **s)
{
	if (!ft_check_num(s))
	{
		ft_putstr("Error\n", 2);
		ft_free(s, 0, 2);
		return (0);
	}
	if (!ft_bigger_int(s))
	{
		ft_putstr("Error\n", 2);
		ft_free(s, 0, 2);
		return (0);
	}
	if (!ft_dup_num(s))
	{
		ft_putstr("Error\n", 2);
		ft_free(s, 0, 2);
		return (0);
	}
	return (1);
}
