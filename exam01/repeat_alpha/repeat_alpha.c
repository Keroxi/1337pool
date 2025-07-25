/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 09:56:54 by aasita            #+#    #+#             */
/*   Updated: 2025/07/25 10:43:21 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat_alpha(char c)
{
	int n;

	n = 0;
	if (c >= 'A' && c <= 'Z')
		n = (c - 64);
	else if (c >= 'a' && c <= 'z')
		n = (c - 96);
	return (n);
}
void	ft_print_repeat(char c, int n)
{
	int j;

	j = 1;
	while (j <= n)
	{
		write(1, &c, 1);
		j++;
	}
}
int	main(int ac, char **av)
{
	int n;
	int i;

	i = 0;
	n = 0;
	if (ac != 2)
		write(1, "\n", 1);
	while (av[1][i])
	{
		if ((av[1][i] >= 'A' && av[1][i] <= 'Z') || (av[1][i] >= 'a' && av[1][i] <= 'z'))
		{
			n = ft_repeat_alpha(av[1][i]);
			ft_print_repeat(av[1][i], n);
		}
		i++;
	}
	return (n);
}
