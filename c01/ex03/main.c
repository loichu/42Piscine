/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 03:17:26 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 03:36:31 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, r: %d", a, b, div, mod);
}
