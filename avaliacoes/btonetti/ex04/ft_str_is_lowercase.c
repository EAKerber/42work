/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btonetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:01:07 by btonetti          #+#    #+#             */
/*   Updated: 2024/08/28 09:35:45 by btonetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (!(c[i] >= 'a' && c[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_lowercase("Hello World"));
	printf("%d", ft_str_is_lowercase("hello world"));
	printf("%d\n", ft_str_is_lowercase("helloworld"));
	return (0);
}*/
