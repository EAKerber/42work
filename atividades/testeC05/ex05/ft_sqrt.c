/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:28:35 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 17:28:37 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(2));
}*/