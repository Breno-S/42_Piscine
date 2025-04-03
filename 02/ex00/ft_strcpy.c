/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:49:23 by brensant          #+#    #+#             */
/*   Updated: 2025/03/22 16:38:01 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
int	main(void)
{
	char	*src = "Hello, world!";
	char	char_arr1[20];
	char	char_arr2[20];

	printf("src = %s\n\n", src);

	ft_strcpy(char_arr1, src);
	strcpy(char_arr2, src);
	
	printf("meu = %s\n", char_arr1);
	printf("std = %s\n", char_arr2);
	return (0);
}
*/