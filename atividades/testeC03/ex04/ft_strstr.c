/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:15:58 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/29 01:04:54 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		size;
	int		match;

	size = 0;
	match = 0;
	ptr = str;
	while (to_find[size] != '\0')
		size++;
	if (!(size))
		return (str);
	while (*str++ && match != size)
		if (match++ == 0 || *str == to_find[match - 1])
			ptr = &str[-(size - 1)];
	else
			match = 0;
	if (match == size)
		return (ptr);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	*str = "Achess essa palavra";
	char	*find = "essa";

	printf("%s", ft_strstr(str, find));
}*/
