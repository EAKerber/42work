/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:08:11 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 15:05:47 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (dest_size >= size)
		return (dest_size + src_size);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

#include	<stdio.h>
int	main(void)
{
	unsigned int i;
	unsigned int size;

	char src[] = "caixa dagua";
	char dst[50] = "cabeca de ";
	size = 50;

	i = ft_strlcat(dst, src, size);
	printf("i: %d, dst: %s", i, dst);
	return (0);
}
