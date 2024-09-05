/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:01:37 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/31 12:01:41 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_argument(char *nbr);

int	main(int argc, char *argv[])
{
	(void)argc;
	if (check_argument(argv[1]))
	{
		write(1, "error", 5);
		return (0);
	}
	write(1, "success", 7);
	return (0);
}
