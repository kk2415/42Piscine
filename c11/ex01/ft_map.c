/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 01:11:58 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/17 05:12:16 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
