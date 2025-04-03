/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:00:37 by brensant          #+#    #+#             */
/*   Updated: 2025/04/01 10:46:07 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (guess <= nb / 2)
	{
		if ((guess * guess) == nb)
			return (guess);
		guess++;
	}
	return (0);
}

/* 
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	return (0);
}
 */