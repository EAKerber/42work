/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:13:20 by peda-cos          #+#    #+#             */
/*   Updated: 2024/08/18 13:08:21 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	word;

	word = 'a';
	while (word <= 'z')
	{
		write(1, &word, 1);
		word++;
	}
}

int main(void){
	ft_print_alphabet();
	return 0;
}
