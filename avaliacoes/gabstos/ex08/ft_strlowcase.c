/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:54:27 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/27 15:35:25 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*phrase;

	phrase = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (phrase);
}

 int main(void)
 {
 	char phrase[] = "TRANSFORMANDO EM MINUSCULA";
 	ft_strlowcase(phrase);
 	printf("%s", phrase);
 	return 0;
 }
