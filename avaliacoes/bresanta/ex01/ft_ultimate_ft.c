/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:52:39 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:24:27 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	num;
	int	*int_ptr1;
	int	**int_ptr2;
	int	***int_ptr3;
	int	****int_ptr4;
	int	*****int_ptr5;
	int	******int_ptr6;
	int	*******int_ptr7;
	int	********int_ptr8;

	int_ptr1 = &num;
	int_ptr2 = &int_ptr1;
	int_ptr3 = &int_ptr2;
	int_ptr4 = &int_ptr3;
	int_ptr5 = &int_ptr4;
	int_ptr6 = &int_ptr5;
	int_ptr7 = &int_ptr6;
	int_ptr8 = &int_ptr7;
	ft_ultimate_ft(&int_ptr8);
	printf("%d\n", num);
	return (0);
}

