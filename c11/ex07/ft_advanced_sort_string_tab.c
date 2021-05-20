/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:10:14 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/17 03:55:25 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

static void	swap(char **tab, int s1, int s2)
{
	char *temp;

	temp = tab[s1];
	tab[s1] = tab[s2];
	tab[s2] = temp;
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	len;
	int	i;
	int	j;

	len = get_len(tab);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				swap(tab, j, j + 1);
			j++;
		}
		i++;
	}
}
