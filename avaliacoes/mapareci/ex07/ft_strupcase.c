/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:36:08 by mapareci          #+#    #+#             */
/*   Updated: 2024/09/04 12:05:38 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str -32;
		str++;
	}
	return (start);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "Mariana";

	printf("string: %s\n", str);
	printf("result: %s\n", ft_strupcase(str));
	return (0);
}
