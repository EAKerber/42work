/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:52:10 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 18:57:48 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_printable("\n");
	a = a + '0';
	write(1, &a, 1);
}*/
