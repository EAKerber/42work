/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:43:30 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:07:42 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

 #include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;
	int *pointer_div;
	int *pointer_mod;

	pointer_div = &div;
	pointer_mod = &mod;
	
	ft_div_mod(10, 3, pointer_div, pointer_mod);

	printf("%d\n%d", div, mod);

	return (0);
}

