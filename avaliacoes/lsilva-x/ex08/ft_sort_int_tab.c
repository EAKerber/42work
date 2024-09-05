/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:51:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/08/20 19:22:35 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	if (size <= 1)
		return ;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
int main(void){
	int size = 5;
	int arr[5] = {2,0,7,-5,9};

	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	ft_sort_int_tab(arr, size);
	printf("\n");
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}

}