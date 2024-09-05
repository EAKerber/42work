/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:19:41 by mapareci          #+#    #+#             */
/*   Updated: 2024/09/04 12:12:46 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 30 && *str <= 126)
			return (1);
		str++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "\x1F";

	printf("result: %d\n", ft_str_is_printable(str));
	return (0);
}
