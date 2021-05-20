/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:04:36 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 21:29:14 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int (*g_fp_op[5])(int a, int b);

void	enter_ft(char *av)
{
	if (*av == '+')
		g_fp_op[0] = &sum;
	else if (*av == '-')
		g_fp_op[1] = &sub;
	else if (*av == '*')
		g_fp_op[2] = &mul;
	else if (*av == '/')
		g_fp_op[3] = &ft_div;
	else if (*av == '%')
		g_fp_op[4] = &mod;
}

int		get_number(char *av)
{
	int		num;

	if (*av == '+')
		num = 0;
	else if (*av == '-')
		num = 1;
	else if (*av == '*')
		num = 2;
	else if (*av == '/')
		num = 3;
	else if (*av == '%')
		num = 4;
	else
	{
		write(1, "0\n", 2);
		num = 5;
	}
	return (num);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		num;
	int		result;
	int		av1;
	int		av3;

	if (ac != 4)
		return (0);
	enter_ft(av[2]);
	num = get_number(av[2]);
	if (num == 5)
		return (0);
	av1 = ft_atoi(av[1]);
	av3 = ft_atoi(av[3]);
	if (av3 == 0 && (num == 3 || num == 4))
	{
		if (num == 3)
			ft_putstr("Stop : division by zero");
		else if (num == 4)
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	result = (*g_fp_op[num])(av1, av3);
	ft_putnbr(result);
}
