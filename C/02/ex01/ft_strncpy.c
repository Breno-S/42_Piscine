/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:05:57 by brensant          #+#    #+#             */
/*   Updated: 2025/03/22 16:36:29 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*src = "Hello 42";
	char	char_arr1[20];
	char	char_arr2[20];

	printf("src = %s\n\n", src);

	ft_strncpy(char_arr1, src, 5);
	strncpy(char_arr2, src, 5);

	printf("meu = %s\n", char_arr1);
	printf("std = %s\n", char_arr2);
	return (0);
}
*/
