/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:34:29 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 15:56:35 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	buffer[3];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		buffer[0] = '0' + i;
		while (j < 9)
		{
			k = j + 1;
			buffer[1] = '0' + j;
			while (k < 10)
			{
				buffer[2] = '0' + k;
				write(1, buffer, 3);
				if (k++ != 9 || j != 8 || i != 7)
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
