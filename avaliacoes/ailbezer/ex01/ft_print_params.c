/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:00:05 by ailbezer          #+#    #+#             */
/*   Updated: 2024/09/01 17:37:17 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	buffer;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			buffer = argv[i][j];
			write(1, &buffer, 1);
			j++;
		}	
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
