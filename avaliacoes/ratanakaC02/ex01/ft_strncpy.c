/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:35:37 by ratanaka          #+#    #+#             */
/*   Updated: 2024/09/02 18:01:48 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*save;

	save = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src ++;
		dest ++;
		n --;
	}
	*dest = '\0';
	return (save);
}
#include <unistd.h>

int	main(void)
{
	char	Jorge[] = "Super Idol";
	char	Jorgin[] = "dichaurum dominique";
	int		n = 5;

	ft_strncpy(Jorgin, 	Jorge, n);

	write(1, Jorgin, n);
	write(1, "\n", 1);
	return (0);
}
