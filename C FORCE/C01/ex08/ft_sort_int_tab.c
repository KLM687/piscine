/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:22:11 by flee              #+#    #+#             */
/*   Updated: 2021/03/15 16:41:06 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int a;

	a = 0;
	while (a < size)
	{
		if (tab[a] > (tab[a + 1]))
		{
			ft_swap(&tab[a], &tab[a + 1]);
			a = 0;
		}
		else
		{
			a++;
		}
	}
}
