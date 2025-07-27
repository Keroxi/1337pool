/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:28:22 by aasita            #+#    #+#             */
/*   Updated: 2025/07/27 17:14:08 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_l;
	unsigned int	dest_l;
	unsigned int	i;

	src_l = ft_strlen(src);
	if (size == 0)
		return (src_l);
	dest_l = ft_strlen(dest);
	if (size <= dest_l)
		return (size + src_l);
	i = 0;
	while (src[i] && (i + dest_l) < (size - 1))
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest_l + src_l);
}
