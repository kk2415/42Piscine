/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:27:30 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/08 04:51:19 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	int		count;

	i = 0;
	num = 0;
	count = 0;
	while (*str == 32 || *str == 9 || *str == 10 || \
			*str == 11 | *str == 12 || *str == 13)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*(str++) == 45)
			count++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + ((*str) - '0');
		str++;
	}
	if (count % 2 == 1)
		return (num * -1);
	return (num);
}
