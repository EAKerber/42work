/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:07 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/08/31 14:37:01 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

// verificar se o arquivo existe e se pode ser aberto
int	check_file_validity(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	close(fd);
	return (1);
}

// ler e validar o contéudo do dicionário
int	parse_dictionary(const char *filename)
{
	int		fd;
	char	buffer[1024];
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	// Ler o dicionário e implementar a lógica de parsing
	// Exemplo básico de buffer de leitura
	bytes_read = read(fd, buffer, 1024);
	if (bytes_read <= 0)
	{
		write(2, "Dict Error\n", 11);
		close(fd);
		return (0);
	}
	// TODO: Adicionar lógica de parsing
	close(fd);
	return (1);
}
