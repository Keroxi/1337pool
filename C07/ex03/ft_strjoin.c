/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:25:40 by aasita            #+#    #+#             */
/*   Updated: 2025/08/04 18:10:52 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	len;

	len = ft_strlen(dest);
	dest = ft_strcpy((dest + len), src);
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_l;
	char	*joined_str;

	if (size <= 0)
	{
		joined_str = (char *)malloc(sizeof(char));
		joined_str[0] = '\0';
		return (joined_str);
	}
	total_l = total_len(size, strs, sep);
	joined_str = (char *)malloc(total_l * sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	ft_strcpy(joined_str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(joined_str, sep);
		ft_strcat(joined_str, strs[i]);
		i++;
	}
	return (joined_str);
}
/*
#include <stdio.h>
int main()
{
  char *strings[] = {"1", "3", "3" "7"};
  char *sep = " ";
  char *new_str = ft_strjoin(3, strings, sep);
  printf("%s\n", new_str);
  return 0;
}
*/
