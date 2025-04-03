/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:59:45 by brensant          #+#    #+#             */
/*   Updated: 2025/03/16 14:30:40 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int column, char vertex, char center)
{
	int	i;

	i = 1;
	while (i <= column)
	{
		if (i == 1 || i == column)
			ft_putchar(vertex);
		else
			ft_putchar(center);
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
				print_row(column, 'A', 'B');
			else if (i == row)
				print_row(column, 'C', 'B');
			else
				print_row(column, 'B', ' ');
			i++;
		}
	}
}
