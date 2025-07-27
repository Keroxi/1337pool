/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 21:29:48 by aasita            #+#    #+#             */
/*   Updated: 2025/07/27 22:46:28 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sum = 0;
	while ((str[i] = ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		sum = (sum * 10) + (str[i] + '0');
		i++;
	}
	return(sign * sum);
}
#include <stdio.h>
int main()
{
    int sum = ft_atoi("---+--+1234ab567");
    printf("sum : %d", sum);
    return 0;
}
