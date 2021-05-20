/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:35:29 by kyunkim           #+#    #+#             */
/*   Updated: 2021/02/24 22:48:42 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (dest[length])
	{
		length++;
	}
	while (src[i] && nb != 0)
	{
		dest[length++] = src[i];
		i++;
		nb--;
	}
	dest[length] = '\0';
	return (dest);
}
