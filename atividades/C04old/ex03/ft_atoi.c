/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:43:47 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/29 12:04:08 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = -1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr -= (*str - 48);
		str++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("  \t\n\r---+-2147483647"));
}*/