/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:37:51 by flee              #+#    #+#             */
/*   Updated: 2021/03/16 14:44:36 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_allstrlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int		ft_str_is_not_alpha_numerique(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		return (0);
	}
	else if (str >= 'a' && str <= 'z')
	{
		return (0);
	}
	else if (str >= '0' && str <= '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int		ft_str_is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	ft_allstrlowcase(str);
	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
		index++;
	}
	while (str[index] != '\0')
	{
		if ((ft_str_is_not_alpha_numerique(str[index])) == 1)
		{
			if (ft_str_is_lowercase(str[index + 1]) == 1)
			{
				str[index + 1] -= 32;
			}
		}
		index++;
	}
	return (str);
}
