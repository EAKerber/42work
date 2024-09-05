/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btonetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:46:06 by btonetti          #+#    #+#             */
/*   Updated: 2024/08/28 11:14:19 by btonetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char str1[] = "Hello World";
	char str2[] = "Hello\nWorld";
	char str3[] = "";

	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
}*/
