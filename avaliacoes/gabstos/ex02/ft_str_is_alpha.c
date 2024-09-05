/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:37:09 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/22 14:05:03 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char phrase[] = "temapenasumsemseralph4";
// 	int result = ft_str_is_alpha(phrase);
// 	printf("1 para alpha e 0 para outros: %d ", result);
// 	return 0;
// }