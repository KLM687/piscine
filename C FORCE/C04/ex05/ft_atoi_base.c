/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:12:32 by flee              #+#    #+#             */
/*   Updated: 2021/03/29 07:42:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
	}
	if (i < 2)
		return (0);
	return (1);
}

int		ft_base_index(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	long int	result;
	long int	sign;
	int			base_len;

	result = 0;
	sign = 1;
	base_len = 0;
	if (ft_base_valid(base))
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			*str = '-' ? sign *= -1 : sign;
			str++;
		}
		while (base[base_len])
			base_len++;
		while (ft_base_index(base, *str) != base_len)
		{
			result = result * base_len + ft_base_index(base, *str);
			str++;
		}
	}
	return ((long)(result * sign));
}
