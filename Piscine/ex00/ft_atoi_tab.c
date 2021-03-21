/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:19:50 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 17:00:27 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_arg_are_good(char *str, int size)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '0' + size)
			n++;
		else if (str[i] != ' ' ||
				(str[i] == ' ' &&
				(!(str[i - 1] >= '1' && str[i - 1] <= '0' + size) ||
				!(str[i + 1] >= '1' && str[i + 1] <= '0' + size))))
			return (0);
		i++;
	}
	if (n != 4 * size)
		return (0);
	return (1);
}

void	ft_fill_blank(int **tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_atoi_tab(char *str, int **tab, int size)
{
	int i;
	int n;
	int m;

	i = 0;
	n = 0;
	m = 0;
	if (ft_arg_are_good(str, size))
		while (str[i])
		{
			if (str[i] >= '1' && str[i] <= '0' + size)
			{
				tab[n][m] = str[i] - '0';
				m++;
				if (m > size - 1)
				{
					n++;
					m = 0;
				}
			}
			i++;
		}
	else
		ft_fill_blank(tab, size);
}
