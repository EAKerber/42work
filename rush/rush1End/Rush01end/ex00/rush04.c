/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04teste.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:40:56 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/18 17:17:36 by saalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{	
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{	
		j = 0;
		while (j < x)
		{
			if ((j == 0 && i == 0) || (j == x - 1
					&& i == y - 1 && y > 1 && x > 1))
				ft_putchar('A');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				ft_putchar('C');
			else if ((j > 0 && j < x - 1) && (i > 0 && i < y - 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
