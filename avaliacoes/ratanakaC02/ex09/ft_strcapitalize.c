/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:51:50 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/02 17:57:50 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*savepoint;
	int		upcase;

	upcase = 1;
	savepoint = str;
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			upcase = 1;
			str++;
		}
		if ((*str >= '0' && *str <= '9'))
			upcase = 0;
		if ((*str >= 'A' && *str <= 'Z'))
			*str += 32;
		if ((*str >= 'a' && *str <= 'z') && (upcase == 1))
		{
			*str -= 32;
			upcase = 0;
		}
		str++;
	}
	return (savepoint);
}
#include <stdio.h>

int	main(void)
{
	char	Jorge[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um ABCDE";
	printf ("%s\n", ft_strcapitalize(Jorge));
	return (0);
}