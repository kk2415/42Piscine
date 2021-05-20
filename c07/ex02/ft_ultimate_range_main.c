/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 05:24:15 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/17 02:06:48 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long long	result;
	int			i;

	if (min >= max)
		return ('\0');
	i = 0;
	result = max - min;
	*range = (int *)malloc(sizeof(int) * result);
	if (*range == '\0')
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (result);
}

int		main()
{
	int *str;
	
	int result = ft_ultimate_range(&str, 0, 0);
	printf("result : %d\n", result);
}
