/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:22:58 by aasita            #+#    #+#             */
/*   Updated: 2025/07/23 23:10:12 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_to_hex(unsigned char c)
{
	char	*p;

	p = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(p[c / 16]);
	ft_putchar(p[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_to_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
