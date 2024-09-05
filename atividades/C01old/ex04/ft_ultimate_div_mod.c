/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:13:54 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 19:23:15 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
	return (0);
}*/
