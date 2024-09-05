/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:01 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/08/31 14:36:25 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_file_validity(char *filename);
int	parse_dictionary(const char *filename);
int	is_positive_integer(char *str);

int	main(int argc, char **argv)
{
	// Verificar número de argumentos
	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// Verificar se há um dicionário personalizado a ser lido
	if (argc == 3)
	{
		if (!check_file_validity(argv[1]) || !parse_dictionary(argv[1]))
			return (1);
	}
	else
	{
		// Se não há dicionário personalizado,
		// usar dicionário padrão (implemente isso)
	}

	// Verificar se o argumento é um número positivo
	if (!is_positive_integer(argv[argc - 1]))
		return (1);

	// Continuação da lógica para conversão do número...

	return (0);
}