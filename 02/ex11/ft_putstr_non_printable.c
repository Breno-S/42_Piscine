/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:47:46 by brensant          #+#    #+#             */
/*   Updated: 2025/03/27 09:59:12 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_escaped_hex(char c)
{
	int		remainder;
	char	hex_code[2];

	remainder = c % 16;
	c /= 16;
	hex_code[1] = remainder;
	if (hex_code[1] > 9)
		hex_code[1] = hex_code[1] - 10 + 'a';
	else
		hex_code[1] = hex_code[1] + '0';
	remainder = c % 16;
	c /= 16;
	hex_code[0] = remainder;
	if (hex_code[0] > 9)
		hex_code[0] = hex_code[0] - 10 + 'a';
	else
		hex_code[0] = hex_code[0] + '0';
	write(1, "\\", 1);
	write(1, hex_code, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 0x20 && *str <= 0x7E))
			put_escaped_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}


int	main(void)
{
	char	*str = "Hello \n \t \b";
	ft_putstr_non_printable(str);
	return (0);
}

