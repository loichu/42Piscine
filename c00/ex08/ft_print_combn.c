/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:45:01 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/11 05:26:00 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef enum {false, true} bool;

void	ft_print_combn(int n)
{
	char	nb[n];
	int		i;
	bool	done;

	i = 0;
	while (i < n)
	{
		//if (i == n - 1)
		//	nb[i] = '1';
		//else
		nb[i] = '0';
		i++;
	}
	done = false;
	while (!done)
	{
		if (nb[n - 1] != '9')
		{
			nb[n - 1]++;
		}
		else
		{
			i = n - 1;
			while (i >= 0)
			{
				if (nb[i] == '0')
				{
					if (nb[i + 1] == 10 - (n - i))
					{
					}
				if (nb[i - 1] != nb[i] - 1)
				{
					nb[i - 1]++;
					while (i < n)
					{
						nb[i] = nb[i - 1] + 1;
						i++;
					}
					i--;
				}
				i--;
			}
		}
		write(1, &nb, n);
		//i = n - 1;
		//while (i > 0)
		//{
		//	if (nb[i] == '9')
		//	{
		//		nb[i - 1]++;
		//		nb[i] = nb[i - 1];
		//	}
		//	i--;
		//}
		if (nb[n - 1] > '9')
			done = true;
		else
			write(1, ", ", 2);

	}



}
