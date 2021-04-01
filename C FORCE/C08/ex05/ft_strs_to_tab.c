/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:43:39 by flee              #+#    #+#             */
/*   Updated: 2021/03/30 14:10:14 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H
# include "ft_stock_str.h"
#endif
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int nb_char;

	nb_char = 0;
	while (str[nb_char])
		nb_char++;
	return (nb_char);
}

char				*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	dest = malloc((src_len + 1) * sizeof(char*));
	if (!dest)
		return (NULL);
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_len] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	if (!(tab = malloc((ac + 1) * sizeof(*tab))))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
