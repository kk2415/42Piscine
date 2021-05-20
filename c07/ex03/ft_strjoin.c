/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 05:24:59 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 12:03:22 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char		*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char		*ret;
	char		*tmp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		ret = ((char*)malloc(1));
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ret);
}

int main()
{
        char **arr;
        arr = (char **)malloc(sizeof(char *) * 3);

        arr[0] = "hello";
        arr[1] = "my name is";
        arr[2] = "kkh";

        printf("%s\n", ft_strjoin(3, arr, "#@!##"));
}
