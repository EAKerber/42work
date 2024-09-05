/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:10:44 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/01 17:30:11 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		get_strlen(char *str);
int		check_str(char *s1, char *s2);
int		is_positive_integer(char *nbr);
int		check_file_validity(int file_d);
int		check_buffer(char *buffer, int file_d);
int		check_read(int b_read, char *buffer, int file_d);
void	start_variables(int *b_read, int *j, int *line);

#endif