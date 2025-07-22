/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:14:38 by aasita            #+#    #+#             */
/*   Updated: 2025/07/17 15:38:29 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_xyz(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != '7' || y != '8' || z != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				if (x != y && y != z && z != x)
				{
					ft_print_xyz(x, y, z);
				}
				z++;
			}
			z = ++y + 1;
		}
		y = ++x;
	}
}
