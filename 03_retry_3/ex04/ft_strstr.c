/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:56:37 by brensant          #+#    #+#             */
/*   Updated: 2025/03/26 12:42:38 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	match_len;

	match_len = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		while (*str && (*str != to_find[match_len]))
			str++;
		while (*str && (*str == to_find[match_len]))
		{
			str++;
			match_len++;
		}
		if (to_find[match_len] == '\0')
			return (str - match_len);
		if (*str != '\0')
		{
			str -= match_len - 1;
			match_len = 0;
		}
	}
	return ((char *)0);
}

/*
int	main(void)
{
	char	*str1 = "Ada Lovelace";
	char	*str2 = "Love";

	printf("meu: %s\n", ft_strstr(str1, str2));
	printf("std: %s\n", strstr(str1, str2));
	return (0);
}
*/