/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:42:46 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/09 16:06:08 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print(int ac, char **av)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	while (i < ac)
	{
		while (*(av[i] + j))
		{
			write(1, av[i] + j, 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		idx;

	i = 1;
	while (i < ac)
	{
		idx = i;
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[idx], av[j]) > 0)
				idx = j;
			j++;
		}
		ft_swap(&av[i], &av[idx]);
		i++;
	}
	ft_print(ac, av);
}
