/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:31:46 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/18 16:03:18 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void    ft_putchar(char c)
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
			if((j == 0 && i == 0) || (i == 0 && j == x - 1))
				ft_putchar('A');
			else if ((j == x - 1 && i == y - 1) || (i == y -1 && j == 0))
				ft_putchar('C');
			else if ((j > 0 && j < x -1) && (i > 0 && i < y -1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
	int	main()
	{
		rush(4, 4);
		return(0);
	}	
