/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:10:32 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 17:13:30 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// validar o arquivo
int	check_file_validity(int file_d)
{
	if (file_d == -1)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}

int	check_buffer(char *buffer, int file_d)
{
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	return (1);
}

int	check_read(int b_read, char *buffer, int file_d)
{
	if (b_read == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	return (1);
}

void	start_variables(int *b_read, int *j, int *line)
{
	*b_read = 0;
	*j = 0;
	*line = 0;
}
