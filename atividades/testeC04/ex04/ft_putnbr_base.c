/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:18:03 by ealves-k          #+#    #+#             */
/*   Updated: 2024/08/30 18:18:07 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	check_base(char *base)
{
	int	i;
	int	j;
	int	can_print;

	i = 0;
	can_print = 1;
	while (base[i])
	{
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == 45 || base[i] == 43)
				can_print = 0;
			j++;
		}
		i++;
	}
	if (i <= 1)
		can_print = 0;
	return (can_print);
}

void	print_base(int nbr, char *base, int size)
{
	int	temp;

	if (nbr <= -size)
		print_base(nbr / size, base, size);
	temp = -(nbr % size);
	write(1, &base[temp], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	can_print;
	int	size;

	size = 0;
	can_print = check_base(base);
	if (!can_print)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	if (nbr > 0)
		nbr = -nbr;
	while (base[size])
		size++;
	print_base(nbr, base, size);
}

#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(9579879, "01");
}
