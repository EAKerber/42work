/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:20:16 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:01 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_alpha("");
	a = a + '0';
	write(1, &a, 1);
}*/
