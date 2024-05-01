/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:02:57 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 11:12:13 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/push_swap_bonus.h"

int	ft_parsing_bonus(char **s)
{
	if (!ft_check_num(s))
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	if (!ft_bigger_int(s))
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	if (!ft_dup_num(s))
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	return (1);
}
