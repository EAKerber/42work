/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:08:28 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/02 18:03:19 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*savepoint;

	savepoint = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
	str++;
	}
	return (savepoint);
}
#include <stdio.h>

int	main(void)
{
	char	Jorge[] = "JORGIN";

	printf ("%s\n", ft_strlowcase(Jorge));
	return (0);
}
