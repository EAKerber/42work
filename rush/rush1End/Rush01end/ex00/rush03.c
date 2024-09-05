/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushprot3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalves- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:24:45 by saalves-          #+#    #+#             */
/*   Updated: 2024/08/18 15:15:51 by saalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	j;
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((j == 0 && i == 0) || (j == 0 && i == y - 1))
				ft_putchar('A');
			else if ((j == x - 1 && i == 0) || (j == x - 1 && i == y - 1))
				ft_putchar('C');
			else if ((j != 0 && i != 0) && (j != x - 1 && i != y - 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
