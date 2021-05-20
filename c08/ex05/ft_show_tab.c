/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:26:15 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/11 19:34:20 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	putnbr(unsigned int nb)
{
	int		i;
	int		j;
	char	data[12];

	i = 0;
	j = 1;
	while (i < 12)
		data[i++] = 0;
	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	while (nb)
	{
		data[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (j <= i)
	{
		write(1, &data[i - j], 1);
		j++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
