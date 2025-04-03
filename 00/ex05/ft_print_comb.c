/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:04:32 by brensant          #+#    #+#             */
/*   Updated: 2025/03/13 09:56:49 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_iteration(char ch1, char ch2, char ch3)
{
	write(1, &ch1, 1);
	write(1, &ch2, 1);
	write(1, &ch3, 1);
	if (!(ch1 == '7' && ch2 == '8' && ch3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	d2 = '1';
	d3 = '2';
	while (d1 <= '7')
	{
		while (d2 <= '8')
		{
			while (d3 <= '9')
			{
				print_iteration(d1, d2, d3);
				d3++;
			}
			d2++;
			d3 = d2 + 1;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
