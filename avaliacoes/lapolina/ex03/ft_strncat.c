/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapolina <lapolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:07:57 by lapolina          #+#    #+#             */
/*   Updated: 2024/09/04 08:54:10 by lapolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_start;

	i = 0;
	dest_start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (src[i] != '\0' && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest_start);
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = "World";

    ft_strncat(dest, src, 5); // Deve concatenar "Wor" no final de "Hello"
    printf("Result: %s\n", dest); // Deve imprimir "HelloWor"

    return 0;
}