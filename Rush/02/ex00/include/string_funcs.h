/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_funcs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:40:23 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/30 12:38:06 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_FUNCS_H
# define STRING_FUNCS_H

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		parse_line(int fd, t_key_value *kv);

#endif
