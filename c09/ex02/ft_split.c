/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:14:54 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 16:04:41 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	getlength(char *str, char **temp)
{
	int				i;
	int				t;
	int				j;

	j = 0;
	t = 0;
	i = 0;
	while (str[i])
		i++;
	*temp = (char*)malloc(i + 1);
	while (t < i)
	{
		*(*temp + t) = '2';
		t++;
	}
	*(*temp + t) = 0;
}

void	getarray(char *str, char *charset, char *temp, long long *count)
{
	int				i;
	int				t;

	*count = 0;
	i = -1;
	while (str[++i])
	{
		t = -1;
		while (charset[++t])
			if (str[i] == charset[t])
				temp[i] = '1';
	}
	i = -1;
	while (temp[++i])
	{
		while (temp[i] == '1' && temp[i] != '\0')
			i++;
		if (temp[i] == '2' && temp[i] != '\0')
		{
			(*count)++;
			while (temp[i] == '2' && temp[i] != '\0')
				i++;
		}
	}
}

void	allocarry(char **p, char *temp, long long count)
{
	int				t;
	int				i;
	int				j;

	i = 0;
	t = 0;
	while (temp[t])
	{
		j = 0;
		count = 0;
		while (temp[t] != '2' && temp[t] != '\0')
			t++;
		if (temp[t] == '2' && temp[t] != '\0')
		{
			while (temp[t] == '2' && temp[t] != '\0')
			{
				t++;
				count++;
			}
			*(p + i) = (char*)malloc(sizeof(char) * (count + 1));
			while (j < count)
				*(p[i] + j++) = 1;
			*(p[i++] + count) = '\0';
		}
	}
}

void	input(char *str, char **p, char *temp)
{
	int				i;
	int				t;

	t = 0;
	while (p[t] != 0)
	{
		i = 0;
		while (*(p[t] + i) != 0)
		{
			if (*temp == '2')
			{
				*(p[t] + i) = *str;
				i++;
			}
			temp++;
			str++;
		}
		*(p[t++] + i) = 0;
	}
}

char	**ft_split(char *str, char *charset)
{
	char			**p;
	char			*temp;
	int				i;
	int				t;
	long long		count;

	count = 0;
	t = 0;
	i = 0;
	temp = 0;
	getlength(str, &temp);
	getarray(str, charset, temp, &count);
	p = (char**)malloc(sizeof(char*) * (count + 1));
	p[count] = 0;
	allocarry(p, temp, count);
	input(str, p, temp);
	return (p);
}
