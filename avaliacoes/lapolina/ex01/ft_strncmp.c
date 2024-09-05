/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapolina <lapolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:57:17 by lapolina          #+#    #+#             */
/*   Updated: 2024/09/02 18:16:40 by lapolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
i++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";
	char str4[] = "HelloWorld";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 50));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 1));
	printf("Comparing '%s' and '%s': %d\n", str3, str1, ft_strncmp(str3, str1, 1));
	printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strncmp(str1, str4, 5));

	return (0);
}
