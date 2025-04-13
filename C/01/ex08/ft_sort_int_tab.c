/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brensant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:25:18 by brensant          #+#    #+#             */
/*   Updated: 2025/03/18 10:41:35 by brensant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	array[] = {0, 3, 1, 4, 2};
	int	size = sizeof array / sizeof (int);

	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	ft_sort_int_tab(array, size);
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	return (0);
}
*/
