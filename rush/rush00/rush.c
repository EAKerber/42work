/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:40:56 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/17 10:39:57 by ealves-k         ###   ########.fr       */
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
	
	if(x <= 0 || y <= 0)
		return ;
	i = 0;
	while(i < y)
	{
		j = 0;
		while(j < x){
			ft_putchar('A');
			
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main()
{
	rush(5, 7);
	return (0);
}
