/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 04:03:43 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/24 16:04:03 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				getstring(char *src)
{
	int				i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = getstring(src);
	while (i < size - 1)
	{
		if (src[i] == '\0')
		{
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}
