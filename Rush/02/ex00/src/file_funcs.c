/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:12:48 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 18:34:28 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../include/file_funcs.h"
#include "../include/key_value.h"

static int	get_char(int fd)
{
	char	c;
	int		read_bytes;

	read_bytes = read(fd, &c, 1);
	if (read_bytes == 1)
		return ((unsigned char) c);
	return (-1);
}

void	cpy_numbers(int fd, t_key_value *kv, char *c, int *i)
{
	while (*c >= '0' && *c <= '9')
	{
		kv->key[(*i)++] = *c;
		*c = get_char(fd);
	}
}

void	ignore_spaces_till_eof(int fd, t_key_value *kv, char *c, int *i)
{
	while (!(*c == ' ' || (*c >= 9 && *c <= 13)) && *c != -1)
	{
		kv->value[(*i)++] = *c;
		*c = get_char(fd);
	}
}

int	parse_line(int fd, t_key_value *kv)
{
	char	c;
	int		i;

	i = 0;
	c = get_char(fd);
	if (!(c >= '0' && c <= '9'))
		return (-1);
	cpy_numbers(fd, kv, &c, &i);
	while (c == ' ' || (c >= 9 && c <= 13))
		c = get_char(fd);
	if (c == ':')
	{
		kv->key[i++] = '\0';
		c = get_char(fd);
	}
	while (c == ' ' || (c >= 9 && c <= 13))
		c = get_char(fd);
	i = 0;
	ignore_spaces_till_eof(fd, kv, &c, &i);
	if (c == '\n')
	{
		kv->value[i] = '\0';
		return (1);
	}
	return (-1);
}
