/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:20:17 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/04 13:08:41 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	check;

	check = 0;
	if (*str == '\0')
	{
			check++;
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
	char	Jorge[] = "12";
	printf("%d\n", ft_str_is_alpha(Jorge));
	return(0);
}
