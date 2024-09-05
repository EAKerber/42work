/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:57:09 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/03 20:25:31 by amaferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
			p++;
		else if (str[p] >= 'a' && str[p] <= 'z')
			p++;
		else
			return (0);
	}
	return (1);
}

int 	main(void)
{
	char s1[] = "cadete";
	char s2[] = "@Ablha{";
	char s3[] = "";
	int r = ft_str_is_alpha(s1);

	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	printf("%d\n", r);
}
