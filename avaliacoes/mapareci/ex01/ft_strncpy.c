/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:47:05 by mapareci          #+#    #+#             */
/*   Updated: 2024/09/04 10:47:18 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (0 < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "Mariana";
	char dest[15];
	unsigned int n = 4;

	ft_strncpy(dest, str, n);
	printf("str: %s\n", str);
	printf("dest: %s\n", dest);
	return(0);
}
