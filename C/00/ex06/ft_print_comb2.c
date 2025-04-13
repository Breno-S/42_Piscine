/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:16:13 by brensant          #+#    #+#             */
/*   Updated: 2025/03/15 11:53:31 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_iteration(char ch1_1, char ch1_2, char ch2_1, char ch2_2)
{
	write(1, &ch1_1, 1);
	write(1, &ch1_2, 1);
	write(1, " ", 1);
	write(1, &ch2_1, 1);
	write(1, &ch2_2, 1);
	if (!(ch1_1 == '9' && ch1_2 == '8'
			&& ch2_1 == '9' && ch2_2 == '9'))
		write(1, ", ", 2);
}

void	increment_num(char *ch1, char *ch2)
{
	if (*ch2 == '9')
	{
		(*ch1)++;
		*ch2 = '0';
	}
	else
		(*ch2)++;
}

void	ft_print_comb2(void)
{
	char	ch1_1;
	char	ch1_2;
	char	ch2_1;
	char	ch2_2;

	ch1_1 = '0';
	ch1_2 = '0';
	ch2_1 = '0';
	ch2_2 = '1';
	while (!(ch1_1 == '9' && ch1_2 == '9'))
	{
		while (ch2_1 <= '9' && ch2_2 <= '9')
		{
			print_iteration(ch1_1, ch1_2, ch2_1, ch2_2);
			increment_num(&ch2_1, &ch2_2);
		}
		increment_num(&ch1_1, &ch1_2);
		ch2_1 = ch1_1;
		ch2_2 = ch1_2;
		increment_num(&ch2_1, &ch2_2);
	}
}

/* 
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/