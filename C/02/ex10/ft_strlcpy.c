/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:30:27 by brensant          #+#    #+#             */
/*   Updated: 2025/03/25 11:47:50 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/* 
int	main(void)
{
	char	*str1 = "abcdefghijklmnopqrstuvwxyz";

	char	str2[20] = { 0 };
	char	str4[20] = { 0 };

	char	str3[10] = { 0 };
	char	str5[10] = { 0 };

	printf("str1: %s\n", str1);

	ft_strlcpy(str2, str1, 20);
	strlcpy(str4, str1, 20);

	ft_strlcpy(str3, str1, 10);
	strlcpy(str5, str1, 10);

	printf("meu: %s\n", str2);
	printf("bsd: %s\n\n", str4);

	printf("meu: %s\n", str3);
	printf("bsd: %s\n", str5);

	return (0);
}
*/