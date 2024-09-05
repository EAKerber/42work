/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:38:04 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:11:11 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	while (len <= str[len])
	{
		len++;
	}
	return (len);
}

 #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("Tenhao 20 caracteres"));
}

