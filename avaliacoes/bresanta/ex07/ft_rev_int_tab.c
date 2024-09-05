/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <bresanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:51:57 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:30:49 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int	main(void)
{
	int	array[] = {1, 20, 33, 42};
	int size = (int) (sizeof array / sizeof array[0]);

	for(int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	ft_rev_int_tab(array, size);
	for(int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");

	return (0);
}
