/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <brensant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:05:50 by brensant          #+#    #+#             */
/*   Updated: 2025/03/18 10:03:47 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	array[] = {0, 1, 2, 3, 4};
	int	size = sizeof array / sizeof (int);

	for (size_t i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	ft_rev_int_tab(array, size);
	for (size_t i = 0; i < size; i++)
		printf("%d ", array[i]);
	return (0);
}
*/
