/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 05:59:41 by aasita            #+#    #+#             */
/*   Updated: 2025/08/03 08:28:34 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*int_range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	int_range = (int *)malloc(range * sizeof(int));
	if (!int_range)
		return (NULL);
	i = 0;
	while (i < range)
	{
		int_range[i] = min + i;
		i++;
	}
	return (int_range);
}
