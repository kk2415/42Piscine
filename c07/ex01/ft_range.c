/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:30:26 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/10 03:28:45 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		result;
	int		*arr;
	int		i;

	arr = 0;
	i = 0;
	result = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * result);
	if (arr == '\0')
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
