/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:25:03 by brensant          #+#    #+#             */
/*   Updated: 2025/03/26 10:37:30 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
int	main(void)
{
	char	*str1 = "Hello world!";
	char	*str2 = "Hello 42!";

	if (ft_strncmp(str1, str2, 6) == 0)
		printf("Igual\n");
	else
		printf("Diferente\n");
	return (0);
}
*/