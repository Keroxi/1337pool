/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:28:22 by aasita            #+#    #+#             */
/*   Updated: 2025/07/31 22:46:30 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_l;
	unsigned int	d_l;
	unsigned int	i;

	s_l = 0;
	d_l = 0;
	while (dest[d_l])
		d_l++;
	while (src[s_l])
		s_l++;
	if (size <= d_l)
		return (size + s_l);
	i = 0;
	while (src[i] && i < (size - d_l - 1))
	{
		dest[d_l + i] = src[i];
		i++;
	}
	dest[d_l + i] = '\0';
	return (d_l + s_l);
}
