/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_value.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:08:21 by brensant          #+#    #+#             */
/*   Updated: 2025/03/29 14:49:41 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_VALUE_H
# define KEY_VALUE_H

typedef struct key_value
{
	char	key[40];
	char	value[15];
}	t_key_value;

#endif
