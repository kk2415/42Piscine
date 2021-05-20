/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 01:31:12 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 23:10:13 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (0 != ((*f)(tab[i])))
			count++;
		i++;
	}
	return (count);
}
