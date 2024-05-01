/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:11:57 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 15:42:22 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_num(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		if ((s[i][0] == '-' || s[i][0] == '+') && ft_isdigit(s[i][1]))
			j++;
		while (s[i][j])
		{
			if (!ft_isdigit(s[i][j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_bigger_int(char **s)
{
	int		i;
	long	var_check;

	i = 0;
	while (s[i])
	{
		var_check = ft_atoi(s[i]);
		if (var_check > INT_MAX || var_check < INT_MIN || ft_strlen(s[i]) > 12)
			return (0);
		i++;
	}
	return (1);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_dup_num(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[j])
		{
			if (j != i)
			{
				if (ft_atoi(s[i]) == ft_atoi(s[j]))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_all_checks(char **s)
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
	if (!ft_not_soted(s))
		return (0);
	return (1);
}
