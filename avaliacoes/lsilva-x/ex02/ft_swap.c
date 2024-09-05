/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:26:56 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/19 16:38:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	int a = 97;
	int b = 98;

	write(1, &a, 1);
	write(1, &b, 1);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, "\n", 1);

}