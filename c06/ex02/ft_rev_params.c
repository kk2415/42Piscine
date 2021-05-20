/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:43:21 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/07 21:49:33 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		temp;

	temp = ac - 1;
	j = 0;
	i = 1;
	while (temp)
	{
		av++;
		temp--;
	}
	while (i < ac)
	{
		while (*av[j])
		{
			write(1, av[j], 1);
			av[j]++;
		}
		av--;
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}
