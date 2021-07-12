/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:20:23 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/10 20:42:45 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	calc_pow(long long nb)
{
	int	pow;

	pow = 1;
	while (nb > 9)
	{
		nb /= 10;
		pow *= 10;
	}
	return (pow);
}

void	ft_putnbr(int nb)
{
	int			nb_char;
	long long	long_nb;
	int			pow;

	long_nb = nb;
	if (nb < 0)
	{
		long_nb = -long_nb;
		write(1, "-", 1);
	}
	else
	{
		long_nb = nb;
	}
	pow = calc_pow(long_nb);
	while (pow > 1)
	{
		nb_char = '0' + long_nb / pow;
		write(1, &nb_char, 1);
		long_nb %= pow;
		pow /= 10;
	}
	nb_char = '0' + long_nb;
	write(1, &nb_char, 1);
}
