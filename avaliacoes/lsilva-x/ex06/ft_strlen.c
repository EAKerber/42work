/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:46:52 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/19 19:10:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}	
	return (size);
}

int main(void){
	int a = ft_strlen("0123456789");
	printf("%d", a);
}