/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratanaka <ratanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:41:16 by ratanaka          #+#    #+#             */
/*   Updated: 2024/08/30 17:45:10 by ratanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*save;

	save = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (save);
}

/*int	main(int argc, char *argv[])
{
	char *Jorge = argv[1];
	char *Jorgin = argv[2];

	if(argc != 3)
	{
		printf("Tem que ter 3 jorgins");
		return (-1);
	}
		
	ft_strcpy(Jorgin, Jorge);
	printf("Jorgin recebeu: %s\n", Jorgin);
	return(0);
}*/

int		main(void)
{
	char Jorge[] = "Jorge be like";
	char Jorgin[] = "uelinton ganho do ailton";

	printf("Jorgin recebeu: %s\n", ft_strcpy(Jorgin, Jorge));
	return(0);
}