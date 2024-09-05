/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapolina <lapolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:49:17 by lapolina          #+#    #+#             */
/*   Updated: 2024/09/03 10:06:44 by lapolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
*dest = '\0';
	return (dest_start);
}

int main(void)
{
    char dest[50] = "Hello";
    char src[] = ", world!";

    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest);

    return 0;
}