/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_fix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:35:36 by aasita            #+#    #+#             */
/*   Updated: 2025/07/28 16:27:43 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum = (sum * 10) + (str[i] - '0');
		else return (sign * sum);
		i++;
	}
	return (sign * sum);
}
