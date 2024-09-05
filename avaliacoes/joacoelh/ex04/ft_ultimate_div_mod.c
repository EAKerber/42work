/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:42:52 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:08:31 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 2;
	int *pointer_a;
	int *pointer_b;

	pointer_a = &a;
	pointer_b = &b;

	ft_ultimate_div_mod(pointer_a, pointer_b);

	printf("%d\n", a);
	printf("%d", b);
}
