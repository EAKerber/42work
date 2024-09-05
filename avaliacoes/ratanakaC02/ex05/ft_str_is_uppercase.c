/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:02:51 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/04 13:09:13 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check;

	check = 0;
	if (*str == '\0')
		check++;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char	Jorge[] = "a";
	printf("%d\n", ft_str_is_uppercase(Jorge));
	return (0);
}
