/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:09 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/08/31 14:36:51 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;

	return (len);
}

int	strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	is_positive_integer(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
