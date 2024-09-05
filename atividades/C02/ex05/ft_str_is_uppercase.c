/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:14:49 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 17:20:35 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_uppercase("[");
	a = a + '0';
	write(1, &a, 1);
}*/
