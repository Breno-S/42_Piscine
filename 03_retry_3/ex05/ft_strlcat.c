/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:18:34 by brensant          #+#    #+#             */
/*   Updated: 2025/03/26 12:40:38 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (size == 0 || *src == '\0')
		return (dest_len + ft_strlen(src));
	if (dest_len >= size)
		return (dest_len + ft_strlen(src));
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}

/*
int	main(void)
{
	char	dest[20] = "Hello ";
	char	*src = "world!";
	size_t	result = ft_strlcat(dest, src, 0);

	printf("Resultado: %s\n", dest);
	printf("Tamanho retornado: %zu\n", result);
	return (0);
}
*/