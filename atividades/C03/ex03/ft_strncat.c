/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:15:32 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/27 13:59:00 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	dest[20] = "Teste ";
	char	src[] = "0123456789";

	printf("%s",ft_strncat(dest, src, 5));	
}*/
