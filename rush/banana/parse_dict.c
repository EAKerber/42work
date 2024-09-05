/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:07 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 18:28:00 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include "utils.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	set_key(char *buffer, int *j, t_dict *dict, int line);
void	set_value(char *buffer, int *j, t_dict *dict, int *line);

// ler e validar o contéudo do dicionário
int	parse_dictionary(int file_d, t_dict *dict)
{
	int		b_read;
	int		j;
	int		line;
	char	c;
	char	buffer[SIZE];

	start_variables(&b_read, &j, &line);
	if (!check_buffer(buffer, file_d))
		return (0);
	b_read = read(file_d, &c, 1);
	while (b_read > 0)
	{
		if (c == ':')
			set_key(buffer, &j, dict, line);
		else if ((c == '\n') && j > 0) // TODO TRATAR O CASO DA ÚLTIMA LINHA
			set_value(buffer, &j, dict, &line);
		else if (!((c >= '\t' && c <= '\r') || c == ' '))
			buffer[j++] = c;
		b_read = read(file_d, &c, 1);
	}
	if (!check_read(b_read, buffer, file_d))
		return (0);
	return (1);
}

void	set_key(char *buffer, int *j, t_dict *dict, int line)
{
	int	i;

	i = 0;
	while (i < *j)
	{
		dict->keys[line][i] = buffer[i];
		buffer[i] = 0;
		i++;
	}
	dict->keys[line][i] = '\0';
	*j = 0;
	i = 0;
}

void	set_value(char *buffer, int *j, t_dict *dict, int *line)
{
	int	i;

	i = 0;
	while (i < *j)
	{
		dict->values[*line][i] = buffer[i];
		buffer[i] = 0;
		i++;
	}
	dict->values[*line][i] = '\0';
	*j = 0;
	i = 0;
	*line = *line + 1;
}
