#include "../include/push_swap.h"

void ft_free(char **s, int len, int option)
{
	int i;

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
		while (s[i])
		{
			free(s[i]);
			i++;
		}
	}
	free(s);
}