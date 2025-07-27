/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:19:47 by aasita            #+#    #+#             */
/*   Updated: 2025/07/25 13:38:20 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum = (sum * 10) + (str[i] - '0');
		}
		i++;
	}
	return (sum * sign);
}
int	main(void)
{
	char	*str;
	int	sum;

	str = "\t ---h12345678901sssssdcq";
	sum = ft_atoi(str);
	printf("sum : %d", sum);
	return (0);
}
