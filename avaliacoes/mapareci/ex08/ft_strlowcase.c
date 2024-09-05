/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:33:48 by mapareci          #+#    #+#             */
/*   Updated: 2024/09/04 12:08:49 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str +32;
		str++;
	}
	return (start);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "MARIANa";

	printf("string: %s\n", str);
	printf("result: %s\n", ft_strlowcase(str));
	return (0);
}
