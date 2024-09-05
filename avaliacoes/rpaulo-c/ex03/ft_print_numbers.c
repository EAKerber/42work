/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulo-c <rpaulo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:11:24 by rpaulo-c          #+#    #+#             */
/*   Updated: 2024/08/17 19:25:17 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	zero;

	zero = '0';
	while (zero <= '9')
	{
		write(1, &zero, 1);
		zero++;
	}
}

int	main(void)
{
	ft_print_numbers();
}

