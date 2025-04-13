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

// #include <stdio.h>
// #include <bsd/string.h>

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
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || *src == '\0')
		return (src_len);
	if (dest_len >= size)
		return (dest_len + src_len - 1);
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	dest1[20] = "Hello ";
	char	dest2[20] = "Hello ";

	char	*src = "pisciners!";

	size_t	result1 = ft_strlcat(dest1, src, 13);
	size_t	result2 = strlcat(dest2, src, 13);

	printf("Resultado: %s\n", dest1);
	printf("Tamanho retornado: %zu\n\n", result1);

	printf("Resultado: %s\n", dest2);
	printf("Tamanho retornado: %zu\n", result2);
	return (0);
}
*/