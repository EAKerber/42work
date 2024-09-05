/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:40:40 by ailbezer          #+#    #+#             */
/*   Updated: 2024/09/01 17:52:06 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	buffer;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			buffer = argv[i][j];
			write(1, &buffer, 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
