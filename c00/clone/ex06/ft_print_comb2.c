/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 00:16:28 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/11 23:41:33 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int num)
{
	char	comb[2];

	if (num < 10)
	{
		comb[0] = '0';
		comb[1] = 48 + num;
	}
	else
	{
		comb[0] = 48 + (num / 10);
		comb[1] = 48 + (num % 10);
	}
	write(1, comb, 2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		write_comb(i);
		write(1, " ", 1);
		write_comb(j);
		if (!(i == 98 && j == 99))
			write(1, ", ", 2);
		if (j == 99)
		{
			i++;
			j = i + 1;
		}
		else
		{
			j++;
		}
	}
}
