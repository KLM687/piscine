/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:35:53 by flee              #+#    #+#             */
/*   Updated: 2021/03/31 12:04:11 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int		ft_sizeof_word(char *str, char *charset)
{
	int	size;

	size = 0;
	while (*str && !ft_charset(*str, charset))
	{
		++size;
		++str;
	}
	return (size);
}

int		ft_count_word(char *str, char *charset)
{
	int words;
	int state;

	words = 0;
	state = 1;
	while (*str)
	{
		if (ft_charset(*str, charset))
			state = 1;
		else
		{
			if (state == 1)
				++words;
			state = 0;
		}
		++str;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	int		i;
	int		words;
	char	**tab;

	words = ft_count_word(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	index = -1;
	while (++index < words)
	{
		while (*str && ft_charset(*str, charset))
			++str;
		if (!(tab[index] = malloc(sizeof(char)
			* ft_sizeof_word(str, charset) + 1)))
			return (NULL);
		i = 0;
		while (*str && !ft_charset(*str, charset))
			tab[index][i++] = *str++;
		tab[index][i] = 0;
	}
	tab[index] = 0;
	return (tab);
}
