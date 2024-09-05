/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:05:49 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:02:53 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


#include <stdio.h>

int	main(void)
{
	int	number;
	int	*number_point;

	number_point = &number;

	ft_ft(number_point);

	printf("%d", number);
	return (0);
}

