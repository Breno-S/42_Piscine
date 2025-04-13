/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:20:43 by brensant          #+#    #+#             */
/*   Updated: 2025/04/01 10:04:42 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		nb--;
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
*/