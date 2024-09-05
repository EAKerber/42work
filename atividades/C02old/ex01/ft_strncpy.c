/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:48:25 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 11:35:05 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*ptr;

	ptr = dest;
	i = 0;
	while (i < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
			*dest = '\0';
		dest++;
		i++;
	}
	return (ptr);
}
/*
int	main(void) 
{
	char	src[] = "Hello";
	char	dest[10];

	ft_strncpy(dest, src, 10);
	printf("%s\n", dest);
	return (0);
}*/
