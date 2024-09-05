/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:08:05 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:04:34 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


#include <stdio.h>

int	main(void)
{
	int	num;
	int *nbr;
	int **nbr1;
	int ***nbr2;
	int	****nbr3;
	int *****nbr4;
	int	******nbr5;
	int	*******nbr6;
	int	********nbr7;
	int	*********nbr8;

	nbr8 = &nbr7;
	nbr7 = &nbr6;
	nbr6 = &nbr5;
	nbr5 = &nbr4;
	nbr4 = &nbr3;
	nbr3 = &nbr2;
	nbr2 = &nbr1;
	nbr1 = &nbr;
	nbr = &num;

	ft_ultimate_ft(nbr8);
	printf("%d", num);
	return (0);
} 
