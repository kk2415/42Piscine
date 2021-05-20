/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:36:11 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/24 22:48:08 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (dest[length])
	{
		length++;
	}
	while (src[i])
	{
		dest[length++] = src[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
