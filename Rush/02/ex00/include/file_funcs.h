/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_funcs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:12:48 by brensant          #+#    #+#             */
/*   Updated: 2025/03/30 12:37:41 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_FUNCS_H
# define FILE_FUNCS_H

# include <fcntl.h>

void	read_line(int fd, char *buff, unsigned int len);
char	*ft_strstr(char *str, char *to_find);

#endif
