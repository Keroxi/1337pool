/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:13:55 by aasita            #+#    #+#             */
/*   Updated: 2025/07/31 20:49:30 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr(av[ac - 1]);
	else
		ft_putstr(av[0]);
	write(1, "\n", 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
