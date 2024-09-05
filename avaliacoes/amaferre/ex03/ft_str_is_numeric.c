/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:37:55 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 20:04:31 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	p;
	int	r;

	p = 0;
	r = 1;
	while (str[p] != '\0')
	{
		if (str[p] < '0' || str[p] > '9')
		{
			r = 0;
			break ;
		}
		p++;
	}
	return (r);
}
#include <stdio.h>
int main() {
    char str1[] = "987654321";
    char str2[] = ":";

    printf("Str1:%d\n", ft_str_is_numeric(str1));
    printf("Str2:%d\n", ft_str_is_numeric(str2));

    return 0;
}
