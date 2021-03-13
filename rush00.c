/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:06:09 by flee              #+#    #+#             */
/*   Updated: 2021/03/13 14:56:30 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_line(int x)
{
	int cpt;

	cpt = 1;
	ft_putchar('/');
	if (x > 1)
	{
		x -= 2;
		while (cpt <= x)
		{
			ft_putchar('*');
			cpt++;	
		}
		ft_putchar(92);
		ft_putchar('\n');
	}
}

void	middle_line(int x, int y)
{
	int cpty;
	int cptx;
	
	cpty = 1;
	cptx = 1;
	y -= 2;
	x -= 2;
	while (cpty <= y)
	{
		ft_putchar('*');
		while (cptx <= x)
		{
			ft_putchar(' ');
			cptx++;
		}
		cptx = 1;
		ft_putchar('*');
		ft_putchar('\n');
		cpty++;
	}
}

void end_line(int x)
{
	int cpt;
	
	cpt = 1;
	ft_putchar(92);
	if (x > 1)
	{
		x -= 2;
		while (cpt <=  x)
		{
			ft_putchar('*');
			cpt++;	
		}
		ft_putchar('/');
		ft_putchar('\n');
		}	
}



void rush01( int x , int y)
{
	if (x > 0 )
		{
			first_line( x ) ;
		
		}
	if ( x > 0 && y > 1 )
	{
		middle_line( x, y);
		end_line(x);
	}
}

int main () 
{
	rush01(5,5);
	return 0;
}
