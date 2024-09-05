/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:17:36 by mapareci          #+#    #+#             */
/*   Updated: 2024/09/04 11:37:40 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			return (1);
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char str[] = ":";

	printf("result: %d\n", ft_str_is_numeric(str));
	return (0);
}
