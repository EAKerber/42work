/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:29:23 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/02 15:29:25 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);

int	check_base(char *base)
{
	int	i;
	int	j;
	int	can_print;

	i = 0;
	can_print = 1;
	while (base[i])
	{
		if (base[i] == 45 || base[i] == 43 || base[i] == 127
			|| (base[i] >= 0 && base[i] <= 32))
				can_print = 0;
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				can_print = 0;
			j++;
		}
		i++;
	}
	if (i <= 1 || !can_print)
		return (0);
	return (i);
}

int	get_value(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		value;
	int		digit;
	int		sign;
	int		size;
	int		i;

	size = check_base(base);
	sign = -1;
	value = 0;
	i = 0;
	if (!size)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (get_value(base, str[i]) != -1)
	{
		digit = get_value(base, str[i]);
		value = value * size - digit;
		i++;
	}
	return (sign * value);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi_base("-123", "0123456789"));
}*/
