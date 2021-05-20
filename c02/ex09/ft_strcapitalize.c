/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:01:19 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/25 00:00:33 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		if (!(c >= 'a' && c <= 'z'))
		{
			if (!(c >= '0' && c <= '9'))
			{
				return (1);
			}
		}
	}
	return (0);
}

void	change(char *str, int temp, int i)
{
	if ((temp == 1) && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	else if ((temp == 0) && str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		temp;

	i = 0;
	temp = 1;
	while (str[i])
	{
		if (check(str[i]))
		{
			temp = 1;
		}
		else if (!(check(str[i])))
		{
			change(str, temp, i);
			temp = 0;
		}
		i++;
	}
	return (str);
}
