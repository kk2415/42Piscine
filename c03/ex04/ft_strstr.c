/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 04:21:25 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/18 11:46:25 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		p_find = to_find;
		if (*str == *p_find)
		{
			p_str = str;
			while (*p_find != '\0')
			{
				if (*p_find != *p_str)
					break ;
				p_find++;
				p_str++;
			}
			if (*p_find == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
