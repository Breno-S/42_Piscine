/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:01:11 by brensant          #+#    #+#             */
/*   Updated: 2025/03/16 20:07:37 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	q;
	int	r;

	num1 = 7;
	num2 = 3;
	ft_div_mod(num1, num2, &q, &r);
	printf("%d / %d = %d resto %d\n", num1, num2, q, r);
	return (0);
}
*/
