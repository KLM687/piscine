/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:02:08 by flee              #+#    #+#             */
/*   Updated: 2021/03/14 09:28:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharnb(char nb1, char nb2, char nb3)
{
	ft_putchar(nb1);
	ft_putchar(nb2);
	ft_putchar(nb3);
}

void	ft_print_comb(void)
{
	char nb1;
	char nb2;
	char nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_putcharnb(nb1, nb2, nb3);
				if (!(nb1 == '7' && nb2 == '8' && nb3 == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
