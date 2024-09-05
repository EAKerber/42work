/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:52:39 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/02 18:00:27 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*savepoint;

	savepoint = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
	str++;
	}	
	return (savepoint);
}
#include <stdio.h>

int	main(void)
{
	char	Jorge[] = "uelinton";

	printf("%s\n", ft_strupcase(Jorge));
	return (0);
} 
