/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:31:13 by ailbezer          #+#    #+#             */
/*   Updated: 2024/09/01 17:38:55 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	buffer;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			buffer = argv[0][i];
			write(1, &buffer, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
