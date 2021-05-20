/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:58:59 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/23 12:05:03 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check4(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	if (check4(str))
	{
		return (1);
	}
	return (0);
}
