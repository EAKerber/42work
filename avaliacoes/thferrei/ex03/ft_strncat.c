/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:30:49 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/29 11:34:06 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_count;
	unsigned int	count;

	dest_count = 0;
	count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (count < nb && src[count] != '\0')
	{
		dest[dest_count] = src[count];
		count++;
		dest_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char teste[25] = "outro teste ";
	printf("%s", ft_strncat(teste, "funcionando", 4));
}
