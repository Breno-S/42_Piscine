/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:08:33 by brensant          #+#    #+#             */
/*   Updated: 2025/03/16 20:16:59 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quocient;
	int	remainder;

	quocient = *a / *b;
	remainder = *a % *b;
	*a = quocient;
	*b = remainder;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 7;
	num2 = 3;
	printf("num1: %d\n", num1);
	printf("num2: %d\n\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	return (0);
}
*/
