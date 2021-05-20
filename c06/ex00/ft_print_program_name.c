/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:42:19 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/09 23:41:02 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 0)
	{
		while (*av[0])
		{
			write(1, av[0], 1);
			av[0]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
