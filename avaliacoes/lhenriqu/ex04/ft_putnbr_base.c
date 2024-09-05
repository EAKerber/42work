/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:04:59 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/09/03 12:02:26 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

unsigned long	get_len(char *base)
{
	unsigned long	len;
	unsigned long	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-' || base[len] <= ' '
			|| base[len] == 127)
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	return (len);
}

void	parse(unsigned long n, unsigned long len, char *base)
{
	if (n >= len)
		parse(n / len, len, base);
	write(1, &base[n % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned long	len;
	unsigned long	u_long;

	len = get_len(base);
	u_long = (unsigned long)nbr;
	if (len > 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			u_long = -u_long;
		}
		parse(u_long, len, base);
	}
}

int	main(void)
{
	ft_putnbr_base(-255, "0123456789abcdef");
}
