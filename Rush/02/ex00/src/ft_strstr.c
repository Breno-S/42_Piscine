/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:56:37 by brensant          #+#    #+#             */
/*   Updated: 2025/03/29 15:48:49 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
