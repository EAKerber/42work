/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:38:20 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/04 22:51:35 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	p;

	p = 0;
	while (src[p] != '\0' && p < n)
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}	
	return (dest);
}
int	main()
{
	char	src[] = "CADETE";
	char	dest[505];

	ft_strncpy(dest, src, 5);
	printf("%s", dest);
	return 0;
}
