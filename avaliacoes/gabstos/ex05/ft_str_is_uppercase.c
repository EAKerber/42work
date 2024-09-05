/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:00:49 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/22 14:00:34 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "TUDOEMUPPER";
// 	int result = ft_str_is_uppercase(str);
// 	printf("Se for upper retorna 1, se não retorna 0: %d ", result);
// 	return 0;
// }