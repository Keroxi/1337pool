/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 22:13:03 by aasita            #+#    #+#             */
/*   Updated: 2025/07/26 15:47:45 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	diff = s1[i] - s2[i];
	if (i == n)
		return (0);
	return (diff);
}
