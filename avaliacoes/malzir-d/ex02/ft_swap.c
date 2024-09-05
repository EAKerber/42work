/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzir-d <malzir-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:14:15 by malzir-d          #+#    #+#             */
/*   Updated: 2024/09/04 20:27:33 by malzir-d         ###   ########.fr       */
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


int main ()
{
	int x = 13, y = 17;
	printf("Antes da mudança: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Depois da mudança: x = %d, y = %d\n", x, y);
	return (0);
}
