/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:41:34 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 18:54:55 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	p;
	int	r;

	p = 0;
	r = 1;
	while (str[p] != '\0')
	{
		if (str[p] < 'a' || str[p] > 'z')
		{
			r = 0;
			break ;
		}
		p++;
	}
	return (r);
}
#include <stdio.h>
int 	main(void)
{
    char str1[] = "helloc7adete";
    char str2[] = "Hello, Cadete!";

    printf("Str1: %d\n", ft_str_is_lowercase(str1));
    printf("Str2: %d\n", ft_str_is_lowercase(str2));

    return 0;
}
