/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:22:17 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 15:06:43 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] || str[i] == '\0' || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (str[i] == '\0')
				return (0);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}

#include	<stdio.h>
int	main(void)
{
	char	*str = "o rato roeu a roupa";
	char	*substr = "x";
	char	*found;

	found = ft_strstr(str, substr);
	printf("Found: %s", found);
	return (0);
}
