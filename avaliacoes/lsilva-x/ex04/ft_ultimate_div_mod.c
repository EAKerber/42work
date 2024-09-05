/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:31:51 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/19 18:39:27 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp_a;
	int		tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}


int main(void){
	int a = 9;
	int b = 2;
	
	ft_ultimate_div_mod(&a,&b);
	printf("%d\n ", a);
	printf("%d ", b);
}