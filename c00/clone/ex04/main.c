/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:34:48 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 19:41:23 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("Test with value: 1\n");
	ft_is_negative(1);
	printf("\nTest with value: 0\n");
	ft_is_negative(0);
	printf("\nTest with value: -1\n");
	ft_is_negative(-1);
	return (0);
}
