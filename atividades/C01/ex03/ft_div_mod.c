/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:54:23 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 19:16:01 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	mod;
	int	div;

	ft_div_mod(7, 3, &div, &mod);
	mod = mod + '0';
	div = div + '0';
	write(1, &div, 1);
	write(1, "\n", 1);
	write(1, &mod, 1);
	return (0);
}*/
