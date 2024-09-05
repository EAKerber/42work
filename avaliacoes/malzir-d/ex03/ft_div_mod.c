/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzir-d <malzir-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:02:09 by malzir-d          #+#    #+#             */
/*   Updated: 2024/09/04 20:31:42 by malzir-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main()
{
	int x = 5, y = 2, div, mod;
	
		printf("Os valores imputados foram %d e %d\n", x, y);
		ft_div_mod(x, y, &div, &mod);
		printf("A divisão dos valores é %d\n", div);		
		printf("O resto da divisão entre os valores é %d\n", mod);
		return(0);
}
