/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:56:51 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:32:02 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *big, int *small)
{
	int	temp;

	temp = *big;
	*big = *small;
	*small = temp;
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
			{
				swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}


int	main(void)
{
	int	array[] = {16, 20, 8000, 3, 100, 9, 42, 0, 10};
	int	size;
	int	i;

	i = 0;
	size = (int) (sizeof array / sizeof array[0]);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(array, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}

