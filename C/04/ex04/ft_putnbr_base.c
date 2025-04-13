/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:31:00 by brensant          #+#    #+#             */
/*   Updated: 2025/03/27 17:43:36 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_width;
	long	n;

	n = nbr;
	base_width = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= base_width)
	{
		ft_putnbr_base(n / base_width, base);
		ft_putnbr_base(n % base_width, base);
	}
	if (n < base_width)
		write(1, &base[n], 1);
}

/*
int	main(void)
{
	ft_putnbr_base(-42, "01");
	return (0);
}
*/
