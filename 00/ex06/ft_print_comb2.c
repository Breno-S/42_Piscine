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

struct s_num
{
	char	d1;
	char	d2;
};

void	print_iteration(struct s_num first, struct s_num second)
{
	write(1, &first.d1, 1);
	write(1, &first.d2, 1);
	write(1, " ", 1);
	write(1, &second.d1, 1);
	write(1, &second.d2, 1);
	if (!(first.d1 == '9' && first.d2 == '8'
			&& second.d1 == '9' && second.d2 == '9'))
		write(1, ", ", 2);
}

void	increment_num(struct s_num *n)
{
	if (n->d2 == '9')
	{
		n->d1++;
		n->d2 = '0';
	}
	else
		n->d2++;
}

void	ft_print_comb2(void)
{
	struct s_num	number1;
	struct s_num	number2;

	number1.d1 = '0';
	number1.d2 = '0';
	number2.d1 = '0';
	number2.d2 = '1';
	while (!(number1.d1 == '9' && number1.d2 == '9'))
	{
		while (number2.d1 <= '9' && number2.d2 <= '9')
		{
			print_iteration(number1, number2);
			increment_num(&number2);
		}
		increment_num(&number1);
		number2 = number1;
		increment_num(&number2);
	}
}
