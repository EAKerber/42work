/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:38:16 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 20:03:58 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
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

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	size = 5;
	i = 0;
	while (i < size)
	{
		c = '0' + tab[i];
		write(1, &c, 1);
		i++;
	}
	i = 0;
	ft_rev_int_tab(tab, size);
	write(1, "\n", 1);
	while (i < size)
	{
		c = '0' + tab[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/
