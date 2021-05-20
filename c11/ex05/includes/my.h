/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyunkim <kyunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:04:52 by kyunkim           #+#    #+#             */
/*   Updated: 2021/03/16 21:35:43 by kyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <unistd.h>

int		sum(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
int		ft_div(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	compute(unsigned int nb);

#endif
