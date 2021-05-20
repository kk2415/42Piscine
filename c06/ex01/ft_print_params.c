/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:42:46 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/09 23:48:01 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	if (ac == 1)
		return (0);
	av++;
	while (i < ac)
	{
		while (*av[j])
		{
			write(1, av[j], 1);
			av[j]++;
		}
		av++;
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}
