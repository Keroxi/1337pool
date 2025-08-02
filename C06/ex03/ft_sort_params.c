/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:26:25 by aasita            #+#    #+#             */
/*   Updated: 2025/08/01 01:18:12 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
