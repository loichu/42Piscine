/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillete <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:06:02 by jbillete          #+#    #+#             */
/*   Updated: 2021/07/11 02:05:45 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_write_v1(int col, int x)
{
	if (col == 1)
		ft_putchar('o');
	else if (col < x)
		ft_putchar('-');
	else if (col == x)
		ft_putchar('o');
}

void	rush_write_vy(int col, int x)
{
	if (col == 1)
		ft_putchar('o');
	else if (col < x)
		ft_putchar('-');
	else if (col == x)
		ft_putchar('o');
}

void	rush_write_v(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1)
				rush_write_v1(col, x);
			else if (row == y)
				rush_write_vy(col, x);
			else
				rush_write_v(col, x);
			++col;
		}
		ft_putchar('\n');
		++row;
	}
}
