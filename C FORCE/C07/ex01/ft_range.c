/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 08:53:53 by flee              #+#    #+#             */
/*   Updated: 2021/03/29 08:24:08 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int size;

	i = 0;
	size = (max - min);
	if (min >= max)
	{
		tab = NULL;
		return (NULL);
	}
	tab = (int*)malloc(sizeof(*tab) * (size));
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
