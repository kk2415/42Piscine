/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:13:40 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/08 04:55:46 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		getlength(char *arr)
{
	int				i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int		getintlength(int nbr)
{
	int		count;

	count = 0;
	while (1)
	{
		count++;
		nbr = nbr / 10;
		if (!nbr)
			break ;
	}
	return (count);
}

void	base_change(unsigned int nbr, char *base, int length)
{
	char			data[1000];
	int				count;
	int				i;

	i = 0;
	count = getintlength(nbr);
	while (i < 1000)
		data[i++] = 0;
	i = 0;
	while (i < count || nbr)
	{
		data[i] = base[nbr % length];
		nbr = nbr / length;
		if (!nbr)
			break ;
		i++;
	}
	i = 0;
	length = getlength(data);
	while (i < length)
	{
		write(1, &data[--length], 1);
	}
}

int		check(char *base)
{
	char			*arr;
	int				length;
	int				i;
	int				j;
	int				num;

	arr = base;
	length = getlength(arr);
	i = 0;
	j = 0;
	num = 0;
	while (i < length)
	{
		if (arr[i] == 43 || arr[i] == 45)
			num = 1;
		while (j++ < length)
		{
			if (arr[i] == arr[j])
				num = 1;
		}
		j = ++i + 1;
	}
	if (num == 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				length;
	unsigned int	nb;
	char			*dchar;

	nb = (unsigned int)nbr;
	dchar = base;
	length = 0;
	while (*dchar)
	{
		dchar++;
		length++;
	}
	if (length == 0 || length == 1)
		return ;
	else if (check(base))
		return ;
	else if (nbr < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		base_change(nb, base, length);
	}
	else
		base_change(nbr, base, length);
}
