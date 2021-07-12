/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_reverse_alphabet.c						:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lhumbert <marvin@42lausanne.ch>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/07/08 16:46:37 by lhumbert		   #+#	  #+#			  */
/*	 Updated: 2021/07/08 16:49:13 by lhumbert		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
