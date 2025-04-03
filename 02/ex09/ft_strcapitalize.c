/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:53:54 by brensant          #+#    #+#             */
/*   Updated: 2025/03/25 11:30:36 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	i = 0;
	is_first_letter = 1;
	while (str[i] != '\0')
	{
		if (is_first_letter && is_lowercase(str[i]))
		{
			str[i] -= 32;
			is_first_letter = 0;
		}
		else if (!is_first_letter && is_uppercase(str[i]))
			str[i] += 32;
		is_first_letter = !is_alpha_num(str[i]);
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "oi, tUdo bEm? 42paLaVras quArenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/
