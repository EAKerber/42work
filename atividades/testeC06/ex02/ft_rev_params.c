/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:38:49 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/04 12:38:51 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*aux;
	int		count;

	count = argc - 1;
	while (count)
	{
		aux = argv[count];
		while (*aux)
			write(1, aux++, 1);
		write(1, "\n", 1);
		count--;
	}
}
