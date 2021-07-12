/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_numbers.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lhumbert <marvin@42lausanne.ch>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/07/08 17:13:33 by lhumbert		   #+#	  #+#			  */
/*	 Updated: 2021/07/08 17:59:01 by lhumbert		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	num_char;

	number = 0;
	while (number < 10)
	{
		num_char = number + 48;
		write(1, &num_char, 1);
		number++;
	}
}
