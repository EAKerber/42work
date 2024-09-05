/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bresanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:51:28 by bresanta          #+#    #+#             */
/*   Updated: 2024/08/27 16:29:23 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


int	main(void)
{
	char	str[42] = "Hello World";
	printf("String: \"%s\"\n", str);
	printf("Tamanho da string: %d\n", ft_strlen(str));
	return (0);
}

