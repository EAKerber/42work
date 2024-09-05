/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzir-d <malzir-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:59:23 by malzir-d          #+#    #+#             */
/*   Updated: 2024/09/04 20:14:12 by malzir-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int	num = 33;

	printf("%d\n", num);
	ft_ft(&num);
	printf("Endereco de num: %p\n", &num);
	printf("O valor de num é: %d\n", num);
	return (0);
}
