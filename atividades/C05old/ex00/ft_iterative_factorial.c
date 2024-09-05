/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:58:40 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 14:58:42 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	while (--i)
		nb *= i;
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_iterative_factorial(15));
}*/