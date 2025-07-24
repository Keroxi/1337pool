/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:17:26 by aasita            #+#    #+#             */
/*   Updated: 2025/07/21 02:05:37 by aasita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nw_word;

	i = 0;
	nw_word = 1;
	while (str[i])
	{
		if (nw_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			nw_word = 0;
		}
		else if (!nw_word && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
			nw_word = 1;
		else
			nw_word = 0;
		i++;
	}
	return (str);
}
