/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:33:50 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/04 13:08:53 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check;

	check = 0;
	if (*str == '\0')
		check++;
	while (*str != '\0')
	{
		if ((*str == '0') || (*str == '1') || (*str == '2') || (*str == '3')
			|| (*str == '4') || (*str == '5') || (*str == '6') || (*str == '7')
			|| (*str == '8' || (*str == '9')))
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
	printf("%d\n", ft_str_is_numeric(Jorge));
	return(0);
}
