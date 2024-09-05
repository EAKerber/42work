/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:01 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 19:49:07 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include "utils.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int file_d;
	t_dict dict;

	// Verificar número de argumentos
	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// Verificar se há um dicionário personalizado a ser lido
	if (argc == 3)
	{
		file_d = open(argv[1], O_RDONLY);
		if (!(check_file_validity(file_d) && parse_dictionary(file_d, &dict)))
			return (2);
	}
	else
	{
		// Se não há dicionário personalizado,
		// usar dicionário padrão
		file_d = open(DEFAULT_DICT, O_RDONLY);
		if (!(check_file_validity(file_d) && parse_dictionary(file_d, &dict)))
			return (2);
	}
	// REMOVER: printa o dicionário
	// int i = 0;
	// while (i < 41)
	// {
	// 	printf("%s: %s\n", dict.keys[i], dict.values[i]);
	// 	i++;
	// }
	
	// Verificar se o argumento é um número positivo
	if (!is_positive_integer(argv[argc - 1]))
		return (3);
	else if (!parse_number(argv[argc - 1], &dict, file_d))
		return (4);
		
	return (0);
}