/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:28:50 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 15:28:52 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	return (nb *= ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_factorial(12));
}*/