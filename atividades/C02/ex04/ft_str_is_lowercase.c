/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:01:41 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 17:10:39 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_lowercase("abcdefghijklmnopqrstuvwxy{z");
	a = a + '0';
	write(1, &a, 1);
}*/
