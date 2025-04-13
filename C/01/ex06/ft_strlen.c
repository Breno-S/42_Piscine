/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:23:45 by brensant          #+#    #+#             */
/*   Updated: 2025/03/17 12:05:21 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	char	*string = "Hello World";
	int		length;

	length = ft_strlen(string);
	printf("string: %s\n", string);
	printf("length: %d\n", length);
	return (0);
}
*/
