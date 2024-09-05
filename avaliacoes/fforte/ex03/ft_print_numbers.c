/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:01:54 by fforte-j          #+#    #+#             */
/*   Updated: 2024/08/15 20:24:11 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers( void )
{
	int	contador;

	contador = 48;
	while (contador < 57)
	{
		write(1, &contador, 1);
		contador++;
	}
}

int	main( void )
{
	ft_print_numbers();
}
