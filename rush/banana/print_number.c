/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:25:03 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 21:13:35 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include "utils.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	print_number(char *n, t_dict *dict)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (!check_str(n, dict->keys[i]))
		{
			write(1, dict->values[i], get_strlen(dict->values[i]));
			write(1, " ", 1);
			break;
		}
		i++;
	}
}

int	get_number(char *n, int groups, int rest, t_dict *dict)
{
	char	*buffer;
	int		j;

	if (get_strlen(n) == 1)
	{
		print_number(&n[0], dict);
	}
	else if (get_strlen(n) == 2)
	{
		if (n[1] == '0' || n[0] == '1')
		{
			print_number(&n[0], dict);
		}
		else
		{
			buffer = (char *)malloc(get_strlen(n) + 1);
			buffer[0] = n[0];
			buffer[1] = '0';
			buffer[2] = '\0';
			get_number(buffer, 0, 0, dict);
			get_number(&n[1], 0, 0, dict);
		}
	}
	else
	{
		buffer = (char *)malloc(2 + 1);
		buffer[0] = n[0];
		buffer[1] = '\0';
		if (n[0] != '0')
		{
			print_number(buffer, dict);
			print_number("100", dict);
		}
		buffer[0] = n[1];
		buffer[1] = n[2];
		buffer[2] = '\0';
		get_number(buffer, 0, 0, dict);
	}

	if (groups > 0) // ! ver esse groups > 0, antes era groups > 1
	{
		if (!rest)
			groups--;
		buffer = (char *)malloc(groups * 3 + 2);
		j = 0;
		while (j < groups * 3 + 1)
		{
			if (!j)
				buffer[j] = '1';
			else
				buffer[j] = '0';
			j++;
		}
		buffer[j] = '\0';
		if (n[rest])
			print_number(buffer, dict);
		return (1);
	}

	return (1);
}

int	parse_number(char *n, t_dict *dict, int file_d)
{
	int	groups;
	int	rest;
	int	rest_used;
	char *buffer;
	int i;
	
	groups = get_strlen(n) / GROUP_SIZE;
	rest = get_strlen(n) % GROUP_SIZE;
	rest_used = 0;
	while (groups >= 0 || (rest && !rest_used))
	{
		i = 0;
		if (rest && !rest_used)
		{
			buffer = (char *)malloc(rest + 1);
			if (buffer == NULL)
			{
				free(buffer);
				close(file_d);
				return (0);
			}
			while (i < rest)
			{
				buffer[i] = n[i];
				i++;
			}
			rest_used = 1;
		}
		else
		{
			buffer = (char *)malloc(GROUP_SIZE + 1);
			if (buffer == NULL)
			{
				free(buffer);
				close(file_d);
				return (0);
			}
			while (i < GROUP_SIZE)
			{
				buffer[i] = n[rest];
				n++;
				i++;
			}
		}
		buffer[i] = '\0';
		get_number(buffer, groups, rest, dict);
		groups--;
	}

	return (1);
}