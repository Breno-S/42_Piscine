/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:29:47 by brensant          #+#    #+#             */
/*   Updated: 2025/03/22 16:39:03 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "42";
	char	*str2 = "L0V3";
	char	*str3 = "";

	printf("%d ", ft_str_is_numeric(str1));
	printf("%d ", ft_str_is_numeric(str2));
	printf("%d ", ft_str_is_numeric(str3));
	return (0);
}
*/