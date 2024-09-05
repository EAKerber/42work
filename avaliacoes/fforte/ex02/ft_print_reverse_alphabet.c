/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:51:06 by fforte-j          #+#    #+#             */
/*   Updated: 2024/08/15 20:22:55 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet( void )
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
