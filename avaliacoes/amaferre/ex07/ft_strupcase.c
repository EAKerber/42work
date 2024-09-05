/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:45:17 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 19:41:18 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] = str[p] - 32 ;
			p++;
		}
		else
		{
			p++;
		}
	}
	return (str);
}
#include <stdio.h>
int main()
{
    char str[] = "hello, cadetA!";
    printf("Origin str: %s\n", str);
    ft_strupcase(str);
    printf("Modified str: %s\n", str);
    return 0;
}
