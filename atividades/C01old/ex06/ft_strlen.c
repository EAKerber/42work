/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:52 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/19 19:44:33 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	buffer[2];
	int	size;

	size = ft_strlen("01234567891");
	buffer[0] = '0'+(size/10)%10;
	buffer[1] = '0'+size%10;
	write(1, buffer, 2);
	return (0);
}*/
