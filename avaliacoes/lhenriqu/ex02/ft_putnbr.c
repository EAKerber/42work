/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:13:02 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/09/03 12:12:32 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	fix_special_case(int *nb)
{
	if (*nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (*nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int		numbers;
	char	c;

	if (fix_special_case(&nb))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	numbers = 1;
	while (nb / numbers >= 10)
		numbers *= 10;
	while (numbers)
	{
		c = (nb / numbers) + '0';
		write(1, &c, 1);
		nb %= numbers;
		numbers /= 10;
	}
}

int	main(void)
{
		ft_putnbr(1);
	write(1, "\n", 1);
		ft_putnbr(2147483647);
	write(1, "\n", 1);
		ft_putnbr(-2147483648);
	write(1, "\n", 1);
		ft_putnbr(0);
}
