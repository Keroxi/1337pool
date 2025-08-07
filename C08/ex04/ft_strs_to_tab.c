/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:34:03 by aasita            #+#    #+#             */
/*   Updated: 2025/08/07 05:30:06 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*str_tab;

	i = 0;
	str_tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!str_tab)
		return (NULL);
	while (i < ac)
	{
		str_tab[i].size = ft_strlen(av[i]);
		str_tab[i].str = av[i];
		str_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	str_tab[i].str = 0;
	str_tab[i].copy = 0;
	return (str_tab);
}
