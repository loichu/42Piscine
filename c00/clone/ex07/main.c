/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:42:32 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/11 23:43:15 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(111);
	write(1, "\n\n", 2);
	ft_putnbr(-1267);
	write(1, "\n\n", 2);
	ft_putnbr(0);
	write(1, "\n\n", 2);
	ft_putnbr(-2147483648);
	write(1, "\n\n", 2);
	ft_putnbr(2147483647);
	write(1, "\n\n", 2);
}
