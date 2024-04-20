#include "../include/push_swap.h"
#include <stdio.h>

int	ft_count_strs(char **s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (0);
	while (s[counter])
	{
		counter++;
	}
	return (counter);
}

char	**ft_strjoin_pro(char **s1, char **s2)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup_pro(s2));
	if (!s2)
		return (ft_strdup_pro(s1));
	tmp = malloc(sizeof(char *) * (ft_count_strs(s1) + ft_count_strs(s2)) + 1);
	while (s1[i])
	{
		tmp[i] = ft_strdup(s1[i]);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		tmp[i] = ft_strdup(s2[j]);
		i++;
		j++;
	}
	tmp[i] = NULL;
	return (tmp);
}

char	**split_input(int ac, char **av)
{
	char	**str;
	char	**s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s = NULL;
	while (--ac)
	{
		str = ft_split(av[i], ' ');
		s = ft_strjoin_pro(s, str);
		ft_free(str,0 ,2);	
		i++;
	}
	return (s);
}
