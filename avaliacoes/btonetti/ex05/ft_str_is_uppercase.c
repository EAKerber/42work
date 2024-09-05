/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btonetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:23:09 by btonetti          #+#    #+#             */
/*   Updated: 2024/09/02 14:53:00 by btonetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("Hello World"));
	printf("%d\n", ft_str_is_uppercase("hello world"));
	printf("%d\n", ft_str_is_uppercase("helloworld"));
	printf("%d\n", ft_str_is_uppercase("HELLOWORLD"));
	return (0);
}*/
