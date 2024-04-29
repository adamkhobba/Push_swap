/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:50:27 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:23:14 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_not_soted(char **s)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (s[i] && s[i + 1])
	{
		if ((ft_atoi(s[i]) < ft_atoi(s[i + 1])))
			check++;
		i++;
	}
	if (check == ft_count_strs(s))
		return (0);
	return (1);
}
