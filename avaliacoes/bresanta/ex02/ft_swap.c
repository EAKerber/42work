/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:35:24 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:25:06 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int	main(void)
{
	int	num1;
	int	num2;

	num1 = 1001;
	num2 = 42;
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n\n", num2);
	ft_swap(&num1, &num2);
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	return (0);
}
