/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:26:42 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 02:05:53 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char	d[50];
	char	s[7] = {'c', 'a', 'd', 'e', 't', 'e', '\0'};

	ft_strcpy(d, s);
	printf("%s", d);
	return (0);
}
