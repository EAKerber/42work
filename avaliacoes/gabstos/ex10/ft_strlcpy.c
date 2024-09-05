/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:58:29 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/27 10:20:51 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	lenght;
	unsigned int	i;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}

// int main(void)
// {
// 	char dest[10];
// 	char src[] = "hello, world!";
// 	int size = 2;
// 	int result = ft_strlcpy(dest, src, size);
// 	printf("%d", result);
// 	printf("%s", dest);
// 	return 0;
// }