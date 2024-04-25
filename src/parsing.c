#include "../include/push_swap.h"

int	ft_check_num(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == '-')
				j++;
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
		if (var_check > INT_MAX || var_check < INT_MIN)
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
				if (ft_strncmp(s[i], s[j], max(ft_strlen(s[i]),
							ft_strlen(s[j]))) == 0)
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
		ft_putstr("Error\n non number(s)", 2);
		return (0);
	}
	if (!ft_bigger_int(s))
	{
		ft_putstr("Error 2\n bigger than max or !", 2);
		return (0);
	}
	if (!ft_dup_num(s))
	{
		ft_putstr("Error 3\n duplicate number(s)", 2);
		return (0);
	}
	if (!ft_not_soted(s))
	{
		ft_putstr("Error 4\n sorted input", 2);
		return (0);
	}
	return (1);
}
