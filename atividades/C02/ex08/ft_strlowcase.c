/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:26:00 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/21 19:34:53 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (!(*str < 65 || *str > 90))
			*str += 32;
		str++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char str1[] = "HELLO WORLD!";
	char str2[] = "HeLLo WoRLD!";
	char str3[] = "123abcDEF";
	printf("%s\n", str1);
	ft_strlowcase(str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
        ft_strlowcase(str2);
        printf("%s\n", str2);
	printf("%s\n", str3);
        ft_strlowcase(str3);
        printf("%s\n", str3);
	return (0);
}*/
