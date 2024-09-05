/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:15:00 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/28 20:15:03 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	copy;
	int	size;
	int	temp;

	temp = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb > 0)
		nb = -nb;
	copy = nb;
	size = 1;
	while (copy <= -10)
	{
		copy = copy / 10;
		size *= 10;
	}
	while (size)
	{
		temp = 48 + -(nb / size);
		write(1, &temp, 1);
		temp = nb / size;
		nb -= temp * size;
		size /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/