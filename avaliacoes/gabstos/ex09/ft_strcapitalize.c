/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:09:49 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/27 15:36:34 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	is_alpha(char str)
{
	return ((str >= 'a' && str <= 'z' || str >= 'A' && str <= 'Z'));
}

char	is_numeric(char str)
{
	return (str >= '0' && str <= '9');
}

char	is_alpha_numeric(char str)
{
	return (is_alpha(str) || is_numeric(str));
}

char	*ft_strcapitalize(char *str)
{
	char	*origin;
	int		capitalize;

	origin = str;
	capitalize = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && capitalize)
		{
			*str -= 32;
			capitalize = 0;
		}
		else if (*str >= 'A' && *str <= 'Z' && !capitalize)
			*str += 32;
		else if (!is_alpha_numeric(*str))
			capitalize = 1;
		else
			capitalize = 0;
		str++;
	}
	return (origin);
}

 int main(void)
 {
 	char phrase[] = "oi, tudo bem? 42palaVRas quarenta-e-duas; cinquenta+e+um TESTE";
 	ft_strcapitalize(phrase);
 	printf("%s", phrase);
 	return 0;
 }
