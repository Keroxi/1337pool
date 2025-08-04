/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 05:59:41 by aasita            #+#    #+#             */
/*   Updated: 2025/08/03 20:49:44 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	min_to_max;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	min_to_max = max - min;
	*range = (int *)malloc(min_to_max * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < min_to_max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (min_to_max);
}
