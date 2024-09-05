/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:44:15 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:26:09 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int	main(void)
{
	int	num1;
	int	num2;
	int	division;
	int	modulus;

	num1 = 42;
	num2 = 4;
	ft_div_mod(num1, num2, &division, &modulus);
	printf("%d / %d\n", num1, num2);
	printf("Div: %d\nMod: %d\nc", division, modulus);
	return (0);
}
