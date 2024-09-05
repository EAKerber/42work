/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:10:18 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/27 15:33:00 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pointer;

	pointer = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (pointer);
}

 int main()
 {
 	char src[] = "frase qualquer";
 	char dest[50];
 	ft_strcpy(dest, src);
 	printf("%s", dest);
 	return 0;
 }
