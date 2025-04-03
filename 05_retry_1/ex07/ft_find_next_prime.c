/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:43:31 by brensant          #+#    #+#             */
/*   Updated: 2025/04/01 10:42:11 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	if (nb < 0)
		return (2);
	else
		next_prime = nb;
	if (ft_is_prime(next_prime))
		return (next_prime);
	next_prime++;
	while (1)
	{
		if (ft_is_prime(next_prime))
			return (next_prime);
		next_prime++;
	}
	return (next_prime);
}

/* 
int	main(void)
{
	int	num = 32;
	printf("%d\n", ft_find_next_prime(num));
	return (0);
}
 */