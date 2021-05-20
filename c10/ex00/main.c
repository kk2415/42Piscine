/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 00:55:11 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/18 15:19:11 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	char	c;
	char	c1;

	if (ac == 1)
		write(1, "File name missing.", 19);
	if (ac >= 3)
		write(1, "Too many arguments.", 20);
	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) < 0)
		{
			write(1, "Cannot read file.\n", 18);
			return (0);
		}
		while (0 < (c1 = read(fd, &c, 1)))
			write(1, &c, 1);
		close(fd);
	}
	return (0);
}
