/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:51:44 by brensant          #+#    #+#             */
/*   Updated: 2025/03/16 19:58:22 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 42;
	printf("num1: %d\n", num1);
	printf("num2: %d\n\n", num2);
	ft_swap(&num1, &num2);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	return (0);
}
*/
