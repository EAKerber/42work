/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:46:10 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 19:47:51 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
		{
			str[p] = str[p] + 32 ;
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
int	main()
{
    char	str[] = "Hello, CADETE!";
    printf("Origin str: %s\n", str);
    ft_strlowcase(str);
    printf("Modified str: %s\n", str);
    return 0;
}
