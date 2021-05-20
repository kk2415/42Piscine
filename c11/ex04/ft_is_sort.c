/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 01:46:32 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/18 11:12:37 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) == 0)
		{
			i++;
			continue ;
		}
		if (flag == 0)
			flag = (*f)(tab[i], tab[i + 1]);
		else if ((flag < 0 && (*f)(tab[i], tab[i + 1]) > 0) ||
				(flag > 0 && (*f)(tab[i], tab[i + 1]) < 0))
			return (0);
		i++;
	}
	return (1);
}
