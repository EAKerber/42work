/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:20:03 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 14:53:23 by ealves-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include	<stdio.h>
int	main(void)
{
	int		r;
	unsigned int 	n = 15;
	char		*s1 = "saladinha";
	char		*s2 = "saladinhaaaaaaaa";

	r = ft_strncmp(s1, s2, n);
	printf("r: %d\n", r);
	return (0);
}
