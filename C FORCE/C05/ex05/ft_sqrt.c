/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 07:51:06 by flee              #+#    #+#             */
/*   Updated: 2021/03/23 07:51:09 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;
	int square;

	i = 1;
	square = 1;
	while (i < nb && square < nb)
	{
		square = i * i;
		if (square != nb)
			i++;
	}
	if (square == nb)
		return (i);
	return (0);
}
