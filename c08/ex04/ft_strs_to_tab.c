/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 23:11:54 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/11 15:17:24 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					getlength(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int			i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			length;
	t_stock_str	*ptr;

	ptr = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == '\0')
		return (0);
	i = 0;
	length = 0;
	while (i < ac)
	{
		length = getlength(*(av + i));
		ptr[i].size = length;
		ptr[i].str = (char*)malloc(length + 1);
		ptr[i].copy = (char*)malloc(length + 1);
		ft_strcpy(ptr[i].str, av[i]);
		ft_strcpy(ptr[i].copy, av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
