/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacoelh <joacoelh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:50:56 by joacoelh          #+#    #+#             */
/*   Updated: 2024/08/20 19:13:28 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

 #include <stdio.h>

int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	int size;
	int	i;
	int j;

	size = 4;
	i = 0;
	j = 0;

	ft_rev_int_tab(tab, size);

	printf("%s ", "before:");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("%s", "\n");

	ft_rev_int_tab(tab, size);
	printf("%s ", "after:");
	while (j < size)
	{
		printf("%d ", tab[j]);
		j++;
	}

	return (0);
}

