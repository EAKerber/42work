/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:02:42 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/18 17:47:32 by saalves-         ###   ########.fr       */
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
			if ((i == 0 || i == y - 1) && (j > 0 && j < x - 1))
				ft_putchar('-');
			else if ((j == 0 || j == x - 1) && (i > 0 && i < y - 1))
				ft_putchar('|');
			else if ((j > 0 && j < x - 1) && (i > 0 && i < y - 1))
				ft_putchar(' ');
			else
				ft_putchar('o');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
