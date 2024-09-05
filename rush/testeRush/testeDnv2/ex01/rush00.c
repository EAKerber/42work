/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:02:42 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/18 15:54:02 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	main(void)
{
	rush(1, 5);
	return (0);
}
