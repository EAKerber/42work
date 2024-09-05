/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebosse- <rebosse-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:47:20 by rebosse-          #+#    #+#             */
/*   Updated: 2024/08/19 20:24:37 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	number;

	number = n;
	if (number < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative('\0');
}
