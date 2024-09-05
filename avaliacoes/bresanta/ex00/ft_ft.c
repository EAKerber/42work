/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:14:55 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:23:21 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int	number;
	int	*int_ptr;

	int_ptr = &number;
	ft_ft(int_ptr);
	printf("%d\n", number);
	return (0);
}

