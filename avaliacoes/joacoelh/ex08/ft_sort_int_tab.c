/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:07:36 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:14:51 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[10] = {4, -3, 2, -1, 6, 7, 8, 9, 0, 5};
	int	size = 10;
	int i = 0;

	ft_sort_int_tab(tab, size);

	while (i < size)
	{
		printf("%d ", tab[i]);

		i++;
	}
}

