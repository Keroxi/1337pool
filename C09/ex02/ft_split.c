/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:05:51 by aasita            #+#    #+#             */
/*   Updated: 2025/08/08 00:08:24 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	i;
	int	nw_word;
	int	count;

	i = 0;
	nw_word = 1;
	count = 0;
	while (str[i] && is_charset(str[i], charset) == 1)
		i++;
	while (str[i])
	{
		if ((is_charset(str[i], charset) == 0) && nw_word)
		{
			count++;
			nw_word = 0;
		}
		else if (is_charset(str[i], charset) == 1)
		{
			nw_word = 1;
		}
		i++;
	}
	return (count);
}

int	fill_split(char *dest, char *src, int index, char *charset)
{
	int	i;

	i = 0;
	while (src[index] && (is_charset(src[index], charset) == 0))
	{
		dest[i++] = src[index++];
	}
	dest[i] = '\0';
	return (index);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;
	int		index;
	char	**strs;

	i = 0;
	index = 0;
	count = words_count(str, charset);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (strs == NULL)
		return (NULL);
	while (index < count)
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		j = 0;
		while (str[i + j] && is_charset(str[i + j], charset) == 0)
			j++;
		strs[index] = (char *)malloc(sizeof(char) * (j + 1));
		i = fill_split(strs[index], str, i, charset);
		index++;
	}
	strs[count] = NULL;
	return (strs);
}
