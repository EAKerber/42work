/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:32:52 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/27 13:14:47 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	dest[20] = "Teste ";
	char	src[12] = "StrCat 012";
	
	printf("%s\n", dest);
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", dest);
	printf("%s", src);
}*/
