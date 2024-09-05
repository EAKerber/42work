/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulo-c <rpaulo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:39:36 by rpaulo-c          #+#    #+#             */
/*   Updated: 2024/08/17 19:28:03 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z, char x, char w);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c < '8')
	{
		d = c + 1;
		while (d < '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	ft_putchar(char z, char x, char w)
{
	write(1, &z, 1);
	write(1, &x, 1);
	write(1, &w, 1);
	if (z < '7')
		write(1, ", ", 2);
}


int	main(void)
{
	ft_print_comb();
	return (0);
}

