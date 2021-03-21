/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:06:46 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 17:39:55 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "main_header.h"

int		ft_get_size(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			n++;
		i++;
	}
	if (n % 4 == 0)
		return (n / 4);
	return (0);
}

int		**ft_put_memory_data(int size)
{
	int **tab;
	int i;

	tab = malloc(sizeof(int*) * 4);
	i = 0;
	while (i < 4)
	{
		tab[i] = malloc(sizeof(int) * size);
		i++;
	}
	return (tab);
}

int		**ft_put_memory(int size)
{
	int **tab;
	int i;

	tab = malloc(sizeof(int*) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = malloc(sizeof(int) * size);
		i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int	**data;
	int	**box;
	int find;
	int size;

	find = 0;
	size = ft_get_size(argv[1]);
	data = ft_put_memory_data(size);
	box = ft_put_memory(size);
	ft_atoi_tab(argv[1], data, size);
	if (size != 0 && ft_verif_arg(data, size) && argc == 2)
	{
		ft_initialize_box(box, data, size);
		ft_fill_box(box, data, size, &find);
		if (!find)
			ft_puterror();
	}
	else
		ft_puterror();
	free(data);
	free(box);
	return (0);
}
