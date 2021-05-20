/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:05:08 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 21:32:31 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

void	compute(unsigned int nb)
{
	char			nbr;

	if (nb >= 10)
		compute(nb / 10);
	nbr = nb % 10 + '0';
	write(1, &nbr, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb * -1;
	}
	else
		nbr = nb;
	compute(nbr);
	write(1, "\n", 1);
}

int		ft_atoi(char *str)
{
	int				i;
	int				num;
	int				count;

	i = 0;
	num = 0;
	count = 0;
	while (*str == 32 || *str == 9 || *str == 10 || \
			*str == 11 | *str == 12 || *str == 13)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*(str++) == 45)
			count++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + ((*str) - '0');
		str++;
	}
	if (count % 2 == 1)
		return (num * -1);
	return (num);
}
