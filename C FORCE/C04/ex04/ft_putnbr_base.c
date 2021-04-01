/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:22:49 by flee              #+#    #+#             */
/*   Updated: 2021/03/22 08:13:15 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
	}
	return (0);
}

int		ft_base_valid(char *base)
{
	int i;

	i = -1;
	if (ft_check(base))
	{
		return (0);
	}
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
		{
			return (0);
		}
	}
	if (i < 2)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len_base;
	long int	nb;
	int			printnb;

	nb = (long)nbr;
	len_base = 0;
	if (ft_base_valid(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (base[len_base])
			len_base++;
		if (nb >= len_base)
			ft_putnbr_base((nb / len_base), base);
		printnb = base[nb % len_base];
		write(1, &printnb, 1);
	}
}

int main ()
{
	char base[] = "01";
	int nbr = 500;
	ft_putnbr_base(nbr,base);
}
