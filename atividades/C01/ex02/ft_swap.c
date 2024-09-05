/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sawp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:55:15 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 18:55:21 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 97;
	b = 98;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}*/
