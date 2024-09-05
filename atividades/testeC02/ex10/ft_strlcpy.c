/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:09:22 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/22 18:31:49 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	char			*ptr2;

	count = 0;
	ptr2 = src;
	while (*src)
	{
		src++;
		count++;
	}
	if (size == 0)
		return (count);
	src = ptr2;
	while (*src && size > 1)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	*dest = '\0';
	return (count);
}
/*
int	main() 
{
	char	src[] = "Hello, World!";
	char	dest[20]; // Buffer suficientemente grande para a string de origem
	unsigned int	size;
	unsigned int	length;

	// Teste 1: Quando size é maior que o comprimento de src
	size = 20;
	length = ft_strlcpy(dest, src, size);
	printf("Teste 1:\n");
	printf("dest: \"%s\"\n", dest);
	printf("Length: %u\n", length);

	// Teste 2: Quando size é menor que o comprimento de src
	size = 8; // Espaço suficiente para "Hello, " e '\0'
	length = ft_strlcpy(dest, src, size);
	printf("Teste 2:\n");
	printf("dest: \"%s\"\n", dest);
	printf("Length: %u\n", length);

	// Teste 3: Quando size é 0
	// Inicializa dest com valores nulos para garantir que não há lixo de memória
	char dest_empty[20] = {0};
	size = 0;
	length = ft_strlcpy(dest_empty, src, size);
	printf("Teste 3:\n");
	printf("dest: \"%s\"\n", dest_empty); // Dest deve estar vazio
	printf("Length: %u\n", length);

	return (0);
}*/
