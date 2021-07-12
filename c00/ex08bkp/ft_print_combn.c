/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:45:01 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/11 03:35:50 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//int	count_digits(int n)
//{
//	int	digits;
//
//	digits = 0;
//	while (n > 0)
//	{
//		n /= 10;
//		digits++;
//	}
//	return (digits);
//}
int	calc_max(int n)
{
	int	max;

	max = 10;
	while (n > 1)
	{
		max *= 10;
		n--;
	}
	return (max);
}


int	next(int i, int depth)
{
	int	next_int;

	if (depth == 0)
		next_int = i + 1;
	else if (i % depth * 10 == 0) 
		next_int = depth * 10 + depth + 1;
	else
		next_int = i + 1;
	return (next_int);
}

void	print_nb(int i, int max)
{
	int	nb_char;

	while (max > 10)
	{
		max /= 10;
		nb_char = '0' + i / max;
		write(1, &nb_char, 1);
		i %= max;
	}
	nb_char = '0' + i;
	write(1, &nb_char, 1);
}

void	ft_print_combn(int n)
{
	char	comb[n];
	int		depth;
	int		max;
	int		i;
	int		old_i;

	depth = 0;
	i = 0;
	max = calc_max(n);
	//printf("Max: %d", max);
	while (i < max)
	{
		//printf("\nNext: %d", i);
		//printf("\nDepth: %d", depth);
		old_i = i;
		if (i / 10 > old_i / 10)
			depth++;
		i = next(i, depth);
		if (i < max)
		{
			if (i > 1)
				write(1, ", ", 2);
			print_nb(i, max);
		}
	}
}
