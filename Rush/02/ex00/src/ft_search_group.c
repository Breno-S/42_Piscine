/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_group.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:43:05 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 18:44:14 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/key_value.h"
#include	"../include/string_funcs.h"

void	search_any_number(char *number, t_key_value *dict, int dict_lines);

void	search_group(char *number, t_key_value *dict, int dict_lines)
{
	char	search_str[40];
	int		i;
	int		num_width;

	num_width = ft_strlen(number);
	search_str[0] = '1';
	i = 1;
	while (i < num_width)
	{
		search_str[i] = '0';
		i++;
	}
	search_str[i] = '\0';
	search_any_number(search_str, dict, dict_lines);
}
