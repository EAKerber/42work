/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:54:19 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/29 11:31:42 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	res;

	res = 0;
	while (str[res] != '\0')
		res++;
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_pos;
	int	src_pos;

	dest_pos = str_len(dest);
	src_pos = 0;
	while (src[src_pos])
	{
		dest[dest_pos] = src[src_pos];
		dest_pos++;
		src_pos++;
	}
	dest[dest_pos] = '\0';
	return (dest);
}

#include <stdio.h>
int main (void)
{
	char teste[25] = "teste ";
	printf("%s", ft_strcat(teste, "da funcao"));
}
