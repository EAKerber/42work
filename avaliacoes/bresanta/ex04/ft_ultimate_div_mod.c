/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:55:49 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:27:06 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;	

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 42;
	num2 = 5;
	printf("%d / %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Div: %d\nmod: %d\n", num1, num2);
	return (0);
}
