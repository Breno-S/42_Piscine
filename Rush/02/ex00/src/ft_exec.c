/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:20 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 20:07:38 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/key_value.h"
#include	"../include/string_funcs.h"
#include	<unistd.h>

void	search_any_number(char *number, t_key_value *dict, int dict_lines);
void	search_group(char *number, t_key_value *dict, int dict_lines);
void	one_digit(char *nb, t_key_value *dict, int dict_lines, int *pos);
void	two_digit_1(char *nb, t_key_value *dict, int dict_lines, int *pos);
void	two_digit_2(char *nb, t_key_value *dict, int dict_lines, int *pos);
void	three_digit(char *nb, t_key_value *dict, int dict_lines, int *pos);

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
		while (number[i] == '0')
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
		else if (remainder == 0 && number[i] != '\0')
			three_digit(&number[i], dict, dict_lines, &i);
	}
}
