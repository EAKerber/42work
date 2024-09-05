/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:37:33 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/24 10:51:13 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		can_cap;

	can_cap = 1;
	ptr = str;
	while (*str)
	{
		if (!(*str < 97 || *str > 122) && can_cap == 1)
		{
			*str -= 32;
			can_cap = 0;
		}
		else if (!(*str < 65 || *str > 90) && can_cap == 0)
			*str += 32;
		else if (((*str < 97 || *str > 122)
				&& (*str < 65 || *str > 90)
				&& (*str < 48 || *str > 57)))
			can_cap = 1;
		else
			can_cap = 0;
		str++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	str1[] = "hElLo WoRlD! 42is the answer.";
	char	str2[] = "123abc def456 Ghi789";
	char	str3[] = "Already cAPITALIZED";

	printf("%s\n", str1);
	ft_strcapitalize(str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	ft_strcapitalize(str2);
	printf("%s\n", str2);
	printf("%s\n", str3);
	ft_strcapitalize(str3);
	printf("%s\n", str3);
	return (0);
}*/
