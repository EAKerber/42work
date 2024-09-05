/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:34:36 by peda-cos          #+#    #+#             */
/*   Updated: 2024/08/18 13:10:17 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	unword;

	unword = 'z';
	while (unword >= 'a')
	{
		write(1, &unword, 1);
		unword--;
	}
}

int main(void){
	ft_print_reverse_alphabet();
	return 0;
}
