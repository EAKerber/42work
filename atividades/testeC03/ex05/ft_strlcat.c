/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:38:33 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/27 20:19:15 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	dest_size;
	int	src_size;
	int	i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dest[dest_size] && dest_size < size)
		dest_size++;
	while (src[src_size])
		src_size++;
	if (dest_size >= size)
		return (size + src_size);
	while (src[i] && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

/*
int	main(void)
{
    // Caso 1: Dest é suficientemente grande
	// para armazenar src completamente
    {
        char dest1[20] = "Hello";
        char src1[] = "World!";
        unsigned int size1 = sizeof(dest1);
        unsigned int result1 = ft_strlcat(dest1, src1, size1);
        printf("Caso 1:\n");
        printf("Antes: '%s'\n", "Hello");
        printf("Depois: '%s'\n", dest1);
        printf("Comprimento total esperado: %u\n", result1);
        printf("Esperado: 'HelloWorld!'\n\n");
    }

   // Caso 2: Dest é exatamente o tamanho do buffer
    {
        char dest2[10] = "Hi";
        char src2[] = " there!";
        unsigned int size2 = sizeof(dest2);
        unsigned int result2 = ft_strlcat(dest2, src2, size2);
        printf("Caso 2:\n");
        printf("Antes: '%s'\n", "Hi");
        printf("Depois: '%s'\n", dest2);
        printf("Comprimento total esperado: %u\n", result2);
        printf("Esperado: 'Hi there!'\n\n");
    }


    // Caso 3: Dest é menor que o necessário para 
	//armazenar a string completa de src
    {
        char dest3[8] = "Hello";
        char src3[] = "World!";
        unsigned int size3 = sizeof(dest3);
        unsigned int result3 = ft_strlcat(dest3, src3, size3);
        printf("Caso 3:\n");
        printf("Antes: '%s'\n", "Hello");
        printf("Depois: '%s'\n", dest3);
        printf("Comprimento total esperado: %u\n", result3);
        printf("Esperado: 'HelloWo'\n\n");
    }

    // Caso 4: Dest está vazio e o tamanho do buffer é pequeno
    {
        char dest4[5] = "";
        char src4[] = "LongString";
        unsigned int size4 = sizeof(dest4);
        unsigned int result4 = ft_strlcat(dest4, src4, size4);
        printf("Caso 4:\n");
        printf("Antes: '%s'\n", "");
        printf("Depois: '%s'\n", dest4);
        printf("Comprimento total esperado: %u\n", result4);
        printf("Esperado: 'Long'\n\n");
    }

    // Caso 5: Dest é exatamente o tamanho do buffer, 
	//sem espaço para concatenar
    {
        char dest5[6] = "ABCDE";
        char src5[] = "FGH";
        unsigned int size5 = sizeof(dest5);
        unsigned int result5 = ft_strlcat(dest5, src5, size5);
        printf("Caso 5:\n");
        printf("Antes: '%s'\n", "ABCDE");
        printf("Depois: '%s'\n", dest5);
        printf("Comprimento total esperado: %u\n", result5);
        printf("Esperado: 'ABCDE'\n\n");
    }

    return 0;
}*/
