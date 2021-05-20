/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:45:44 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/07 18:39:13 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					getlength(char *src)
{
	int					i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		length;

	length = getlength(dest);
	j = getlength(dest);
	i = 0;
	if (size == 0)
		return (getlength(src));
	while (src[i] && length + i < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (length > size)
		return (getlength(src) + size);
	else
		return (getlength(src) + length);
}
