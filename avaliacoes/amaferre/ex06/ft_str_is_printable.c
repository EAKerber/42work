/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:43:46 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 19:32:09 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	p;
	int	r;

	p = 0;
	r = 1;
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] > 126)
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
    char str1[] = "Hello cadete\177";
    char str2[] = "Hello, cadete\n";
    char str3[] = "";

    printf("Str1: %d\n", ft_str_is_printable(str1));
    printf("Str2: %d\n", ft_str_is_printable(str2));
    printf("Str3: %d\n", ft_str_is_printable(str3));

    return 0;
}
