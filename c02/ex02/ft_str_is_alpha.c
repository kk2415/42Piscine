/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:58:59 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/23 10:29:14 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check1(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	if (check1(str))
	{
		return (1);
	}
	return (0);
}
