/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:20:29 by brensant          #+#    #+#             */
/*   Updated: 2025/03/26 10:37:40 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "abcd";

	if (ft_strcmp(str1, str2) == 0)
		printf("Igual\n");
	else
		printf("Diferente\n");
	return (0);
}
*/