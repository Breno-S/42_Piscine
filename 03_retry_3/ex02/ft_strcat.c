/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:30:06 by brensant          #+#    #+#             */
/*   Updated: 2025/03/25 12:06:38 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*retval;

	retval = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (retval);
}

/*
int	main(void)
{
	char	str1[20] = "Hello ";
	char	*str2 = "world!";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}
*/