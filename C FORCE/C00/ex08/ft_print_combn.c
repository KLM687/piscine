/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 10:01:57 by flee              #+#    #+#             */
/*   Updated: 2021/03/14 11:19:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char init_tab(int tab[],int n)
{
	int cpt;
	cpt = 0;
	while(cpt < n )
	{
		tab[n] = cpt;
		cpt++;
	}
}

void print_tab(int tab[],int n)
{
	int cpt;
	cpt = 0;
	while(cpt < n)
	{
		ft_putchar(tab[cpt]);
	}
}

void ft_print_combn(int n)
{
	char tab[n];
	
	if (n > 0 && n < 10)
	{
		init_tab(tab[n], n);
		print_tab(tab[n], n);
	}
}
int main ()
{
	ft_print_combn(5);
	return 0;
}
