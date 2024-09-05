/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:42:42 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/03 23:42:49 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*aux;
	int		count;

	count = 1;
	while (count < argc)
	{
		aux = argv[count];
		while (*aux)
			write(1, aux++, 1);
		write(1, "\n", 1);
		count++;
	}
}
