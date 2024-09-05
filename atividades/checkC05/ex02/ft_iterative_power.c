/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:49:04 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 15:49:07 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb *= base;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(3, 8));
}*/