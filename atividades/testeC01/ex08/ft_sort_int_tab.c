/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:27:39 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 20:11:14 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	min_idx;
	int	temp;	
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = tab[min_idx];
		tab[min_idx] = tab[i];
		tab[i] = temp;
		i++;
	}	
}
/*
int	main(void)
{
	int	size;
	int	tab[5];
	int	i;
	int	c;

	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 1;
	tab[3] = 5;
	tab[4] = 3;
	size = 5;
	i = 0;
	while (i < size)
	{
		c = '0' + tab[i];
		write(1, &c, 1);
		i++;
	}
	i = 0;
	ft_sort_int_tab(tab, size);
	write(1, "\n", 1);
	while (i < size)
	{
		c = '0' + tab[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/
