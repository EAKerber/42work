/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapolina <lapolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:01:55 by lapolina          #+#    #+#             */
/*   Updated: 2024/08/31 20:54:44 by lapolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";
	char str4[] = "HelloWorld";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing '%s' and '%s': %d\n", str3, str1, ft_strcmp(str3, str1));
	printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4));

	return (0);
}
