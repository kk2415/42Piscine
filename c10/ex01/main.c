/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:19:37 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/18 15:58:27 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	error_print(char *av_0, char *av_i)
{
	ft_putstr(av_0);
	write(1, ": ", 2);
	ft_putstr(av_i);
	write(1, ": ", 2);
	ft_putstr(strerror(errno));
	write(1, "\n", 1);
}

void	one_ac(void)
{
	char	c;
	char	c1;

	while (0 < (c1 = read(0, &c, 1)))
		write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;
	char	c;
	char	c1;

	i = 1;
	if (ac == 1)
		one_ac();
	else
		while (i < ac)
		{
			if ((fd = open(av[i], O_RDONLY)) == -1)
				error_print(av[0], av[i]);
			else
				while (0 < (c1 = read(fd, &c, 1)))
					write(1, &c, 1);
			i++;
			close(fd);
		}
	return (0);
}
