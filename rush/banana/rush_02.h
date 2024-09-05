/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:10:40 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 18:22:07 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H
# define SIZE 256
# define DEFAULT_DICT "numbers.dict"
# define GROUP_SIZE 3

typedef struct s_dict
{
	char	keys[SIZE][SIZE];
	char	values[SIZE][SIZE];
}			t_dict;

int			check_file_validity(int file_d);
int			parse_dictionary(int file_d, t_dict *dict);
int			parse_number(char *n, t_dict *dict, int file_d);

#endif