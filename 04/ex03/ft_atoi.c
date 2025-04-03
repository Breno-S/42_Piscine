/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:54:10 by brensant          #+#    #+#             */
/*   Updated: 2025/03/27 11:25:02 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_digit(char c)
{
	return ((c >= '0' && c <= '9'));
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_digit(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}

/*
int	main(void)
{
	char	*str = " ---+--+1234ab567";

	printf("input: \"%s\"\n\n", str);

	printf("meu: %d\n", ft_atoi(str));
	printf("std: %d\n", atoi(str));

	return (0);
}
*/
