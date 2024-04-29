/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:09 by akhobba           #+#    #+#             */
/*   Updated: 2024/04/29 15:20:15 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_count_strs(char **s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (0);
	while (s[counter])
		counter++;
	return (counter);
}

char	**ft_strjoin_pro(char **s1, char **s2)
{
	char	**tmp;
	int		i[2];

	i[0] = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup_pro(s2));
	if (!s2)
		return (ft_strdup_pro(s1));
	tmp = (char **)malloc(sizeof(char *) * (ft_count_strs(s1)
				+ ft_count_strs(s2) + 1));
	while (s1[i[0]])
	{
		tmp[i[0]] = ft_strdup(s1[i[0]]);
		i[0]++;
	}
	i[1] = 0;
	while (s2[i[1]])
	{
		tmp[i[0]++] = ft_strdup(s2[i[1]++]);
	}
	tmp[i[0]] = NULL;
	ft_free(s1, 0, 2);
	return (tmp);
}

char	**split_input(int ac, char **av)
{
	char	**str;
	char	**s;
	int		i;

	i = 0;
	s = NULL;
	while (--ac)
	{
		str = ft_split(av[i], ' ');
		s = ft_strjoin_pro(s, str);
		ft_free(str, 0, 2);
		i++;
	}
	return (s);
}
