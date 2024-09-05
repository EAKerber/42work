/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:44:12 by ealves-k          #+#    #+#             */
/*   Updated: 2024/09/04 12:44:14 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
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

void	ft_sort_tab(char **tab, int size)
{
	int		min_idx;
	char	*temp;	
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[min_idx]) < 0)
			{
				min_idx = j;
			}
			j++;
		}
		temp = tab[min_idx];
		tab[min_idx] = tab[i];
		tab[i] = temp;
		i++;
	}	
}

int	main(int argc, char *argv[])
{
	int		count;
	char	*aux;

	count = 1;
	ft_sort_tab(argv + 1, argc - 1);
	while (count < argc)
	{
		aux = argv[count];
		while (*aux)
			write(1, aux++, 1);
		write(1, "\n", 1);
		count++;
	}
}
