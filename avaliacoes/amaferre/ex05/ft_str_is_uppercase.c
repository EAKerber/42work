/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:42:25 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 20:28:50 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	p;
	int	r;

	p = 0;
	r = 1;
	while (str[p] != '\0')
	{
		if (str[p] < 'A' || str[p] > 'Z')
		{
			r = 0;
			break ;
		}
		p++;
	}
	return (r);
}
#include <stdio.h>
int main()
{
    char str1[] = "HELLOCADETE.";
    char str2[] = "Hello, Cadete!";
    char str3[] = "";

    printf("Str1: %d\n", ft_str_is_uppercase(str1));
    printf("Str2: %d\n", ft_str_is_uppercase(str2));
    printf("Str3: %d\n", ft_str_is_uppercase(str3));

    return 0;
}
