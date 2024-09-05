/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:38:16 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/04 13:09:22 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check;

	check = 0;
	if (*str == '\0')
		check++;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 127)
		{
			check ++;
		}
		else
		{
			return (0);
		}
		str++;
	}
	if (check != 0)
	{
		return (1);
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	Jorge[] = "5";

	printf("%d\n", ft_str_is_printable(Jorge));
	return (0);
}
