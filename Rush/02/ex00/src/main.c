/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 11:42:01 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/30 21:03:45 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../include/key_value.h"
#include "../include/file_funcs.h"
#include "../include/string_funcs.h"

void	ft_exec(char *number, t_key_value *dict, unsigned int dict_lines);

int	validate_number(char *str)
{
	int	res;
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	res = ft_atoi(str);
	if (res == -1)
		return (0);
	if (res == 0)
	{
		write(1, "zero", 4);
		return (-2);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_key_value	dict_buffer[41];
	int			fd;
	int			read_ln_status;
	int			i;
	int			dict_lines;

	fd = open("numbers.dict", O_RDONLY);
	dict_lines = sizeof dict_buffer / sizeof (t_key_value);
	i = 0;
	read_ln_status = parse_line(fd, &dict_buffer[i++]);
	while (read_ln_status != -1)
		read_ln_status = parse_line(fd, &dict_buffer[i++]);
	if (argc == 2)
	{
		if (validate_number(argv[1]))
			ft_exec(argv[1], dict_buffer, dict_lines);
		else if (validate_number(argv[1]) != -2)
			write(1, "Error", 6);
	}
	else
		write(1, "Error", 6);
	write(1, "\n", 1);
	return (0);
}
