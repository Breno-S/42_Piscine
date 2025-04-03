/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:14:07 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/03/16 13:37:19 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	to_write(int column, char edges, char complement)
{
	int	i;

	i = 1;
	while (i <= column)
	{
		if (i == 1 || i == column)
			ft_putchar(edges);
		else
			ft_putchar(complement);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	column;
	int	row;

	i = 1;
	column = x;
	row = y;
	if (column >= 1 && row >= 1)
	{
		while (i <= row)
		{
			if (i == 1)
				to_write(column, 'A', 'B');
			else if (i == row)
				to_write(column, 'C', 'B');
			else
				to_write(column, 'B', ' ');
			i++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
