/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:29:08 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:05:29 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

 #include <stdio.h>

int	main(void)
{
	int	a = 3;
	int b = 4;
	int	*pointer1 = &a;
	int *pointer2 = &b;

	ft_swap(pointer1, pointer2);

	printf("a: %d and b: %d", a, b);
}

