/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 02:58:23 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/17 02:29:59 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	computes(int nb)
{
	int		i;
	int		temp;
	char	arr[10];
	int		count;

	temp = nb;
	i = 0;
	count = 0;
	while (temp != 0)
	{
		arr[i] = temp % 10 + 48;
		temp /= 10;
		i++;
		count++;
	}
	while (count)
		write(1, &arr[--count], 1);
}

void	minus(int nb)
{
	write(1, "-", 1);
	computes(nb);
	write(1, "8", 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb /= 10;
		nb *= -1;
		minus(nb);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		computes(nb);
	}
	else
		computes(nb);
	if (nb == 0)
		write(1, "0", 1);
}
