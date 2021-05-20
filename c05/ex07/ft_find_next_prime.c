/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:31:23 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/10 01:11:09 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb < 0)
		return (2);
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (!ft_is_prime(nb))
			nb = nb + 1;
	return (nb);
}

int main()
{
        printf("%d\n", ft_find_next_prime(20333300));
}
