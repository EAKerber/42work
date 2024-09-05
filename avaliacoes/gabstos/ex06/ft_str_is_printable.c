/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:15:38 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/22 14:13:59 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((int)*str < 32 || (int)*str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "\r \n \t";
// 	int result = ft_str_is_printable(str);
// 	printf("Se for caracter printavel 1 se nao 0: %d ", result);
// 	return 0;
// }