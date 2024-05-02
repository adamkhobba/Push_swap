/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:11:18 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/01 15:47:21 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_av(int ac, char **av)
{
	int	i;
	int	j;
	int	counter;

	i = 1;
	while (i < ac)
	{
		j = 0;
		counter = 0;
		while (av[i][j] && av[i][j])
		{
			if (av[i][j] == ' ')
				counter++;
			j++;
		}
		if (counter == ft_strlen(av[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_free(char **s, int len, int option)
{
	int	i;

	i = 0;
	if (option == 1)
	{
		while (i < len)
		{
			free(s[i]);
			i++;
		}
	}
	else if (option == 2)
	{
		i = 0;
		while (s[i])
		{
			free(s[i]);
			i++;
		}
	}
	free(s);
}
