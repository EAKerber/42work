/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:30:27 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/04 13:09:02 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;

	check = 0;
	if (*str == '\0')
		check++;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			check++;
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
	char	Jorge[] = "A";

	printf("%d\n", ft_str_is_lowercase(Jorge));
	return (0);
}
