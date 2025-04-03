/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_any_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:37:52 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 18:44:14 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/key_value.h"
#include	"../include/string_funcs.h"

void	search_any_number(char *number, t_key_value *dict, int dict_lines)
{
	int	j;
	int	is_found;
	int	num_len;

	j = 0;
	is_found = -1;
	num_len = ft_strlen(number);
	while (j < dict_lines)
	{
		is_found = ft_strncmp(number, dict[j].key, num_len);
		if (is_found == 0)
		{
			ft_putstr(dict[j].value);
			return ;
		}
		j++;
	}
}
