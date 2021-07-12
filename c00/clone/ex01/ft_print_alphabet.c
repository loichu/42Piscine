/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_alphabet.c								:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lhumbert <marvin@42lausanne.ch>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/07/08 16:36:12 by lhumbert		   #+#	  #+#			  */
/*	 Updated: 2021/07/08 16:41:29 by lhumbert		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
