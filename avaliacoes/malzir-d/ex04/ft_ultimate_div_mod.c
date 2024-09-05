/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzir-d <malzir-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:35:17 by malzir-d          #+#    #+#             */
/*   Updated: 2024/09/04 20:35:21 by malzir-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}


int main()
{
    int x = 15, y =5;
    ft_ultimate_div_mod(&x, &y);
    printf("O resultado da divisão entre os dois números é %d\n", x);
    printf("O resto da divisão é %d\n", y);
    return (0);
}
