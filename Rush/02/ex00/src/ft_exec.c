/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:20 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 18:43:30 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/key_value.h"
#include	"../include/string_funcs.h"
#include	<unistd.h>
#include	<unistd.h>

void	ft_exec(char *number, t_key_value *dict, int dict_lines);
void	search_any_number(char *number, t_key_value *dict, int dict_lines);
void	search_group(char *number, t_key_value *dict, int dict_lines);

void	one_digit(char *nb, t_key_value *dict, int dict_lines, int *pos)
{
	char	search_str[2];

	search_str[0] = nb[0];
	search_str[1] = '\0';
	search_any_number(search_str, dict, dict_lines);
	if (ft_strlen(nb) >= 4)
	{
		write(1, " ", 1);
		search_group(nb, dict, dict_lines);
		write(1, " ", 1);
	}
	(*pos)++;
}

void	two_digit_1(char *nb, t_key_value *dict, int dict_lines, int *pos)
{
	int	j;
	int	is_found;

	j = 0;
	is_found = -1;
	while (j < dict_lines)
	{
		is_found = ft_strncmp(nb, dict[j].key, 2);
		if (is_found == 0)
		{
			ft_putstr(dict[j].value);
			*pos += 2;
			if (ft_strlen(nb) >= 4)
			{
				write(1, " ", 1);
				search_group(&nb[1], dict, dict_lines);
				write(1, " ", 1);
			}
			return ;
		}
		j++;
	}
}

void	two_digit_2(char *nb, t_key_value *dict, int dict_lines, int *pos)
{
	char	search_str[3];

	search_str[0] = nb[0];
	search_str[1] = '0';
	search_str[2] = '\0';
	search_any_number(search_str, dict, dict_lines);
	write(1, " ", 1);
	search_any_number(&nb[1], dict, dict_lines);
	*pos += 2;
}

void	three_digit(char *nb, t_key_value *dict, int dict_lines, int *pos)
{
	char	search_str[3];

	search_str[0] = nb[0];
	search_str[1] = '\0';
	search_any_number(search_str, dict, dict_lines);
	ft_putstr(" hundred");
	(*pos)++;
	if (nb[1] != '0' || nb[2] != '0')
	{
		search_str[0] = nb[1];
		search_str[1] = nb[2];
		search_str[2] = '\0';
		write(1, " ", 1);
		ft_exec(search_str, dict, dict_lines);
	}
	if (ft_strlen(nb) >= 4)
	{
		write(1, " ", 1);
		search_group(&nb[2], dict, dict_lines);
		write(1, " ", 1);
	}
	*pos += 2;
}

void	ft_exec(char *number, t_key_value *dict, int dict_lines)
{
	int	num_width;
	int	i;
	int	remainder;

	while (*number == '0' && ft_strlen(number) > 1)
		number++;
	num_width = ft_strlen(number);
	i = 0;
	while (i < num_width)
	{
		while (number[i] == '0' && ft_strlen(&number[i]) > 1)
			i++;
		remainder = ft_strlen(&number[i]) % 3;
		if (remainder == 2)
		{
			if (number[i] == '1' || number[i + 1] == '0')
				two_digit_1(&number[i], dict, dict_lines, &i);
			else
				two_digit_2(&number[i], dict, dict_lines, &i);
		}
		else if (remainder == 1)
			one_digit(&number[i], dict, dict_lines, &i);
		else if (remainder == 0)
			three_digit(&number[i], dict, dict_lines, &i);
	}
}
