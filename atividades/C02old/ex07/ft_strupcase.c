/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:59:46 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/22 14:42:24 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (!(*str < 97 || *str > 122))
			*str -= 32;
		str++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char str1[] = "hello world!";
	char str2[] = "HeLLo WoRLD!";
	char str3[] = "123abcDEF";
	printf("%s\n", str1);
	ft_strupcase(str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
        ft_strupcase(str2);
        printf("%s\n", str2);
	printf("%s\n", str3);
        ft_strupcase(str3);
        printf("%s\n", str3);
	return (0);
}*/
