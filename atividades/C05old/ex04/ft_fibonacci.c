/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:58:58 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 16:59:01 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(46));
}*/