/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:24:57 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/08/31 14:37:52 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_strlen(char *str);

// conversão do número para a forma escrita
void	convert_number_to_words(char *number)
{
	// TODO: Implementar a lógica de conversão usando o dicionário
	write(1, "Número recebido: ", 17);
	write(1, number, get_strlen(number));
	write(1, "\n", 1);
}
