/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_box.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:28:40 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 16:00:40 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fill_box_header.h"

int		ft_verif_line(int **box, int size, int row, int val)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (box[row][i] == val)
			return (0);
		i++;
	}
	return (1);
}

int		ft_verif_col(int **box, int size, int col, int val)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (box[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}

int		ft_ultimate_verif_data(int **box, int **data, int size)
{
	if (ft_verif_0(box, data, size) && ft_verif_1(box, data, size) &&
		ft_verif_2(box, data, size) && ft_verif_3(box, data, size))
		return (1);
	return (0);
}

void	ft_fill_box(int **box, int **data, int size, int *find)
{
	int i;
	int val;
	int col;

	val = ft_get_val(box, size);
	col = ft_get_col(box, size);
	i = -1;
	if (val == 0 && ft_verif_finish(box, data, size) && !*find)
	{
		ft_puttab(box, size);
		*find = 1;
	}
	else if (ft_verif_col(box, size, col, val) && !*find)
		while (++i < size)
			if (box[i][col] == 0 && ft_verif_line(box, size, i, val))
			{
				box[i][col] = val;
				if (ft_ultimate_verif_data(box, data, size))
					ft_fill_box(box, data, size, find);
				box[i][col] = 0;
			}
}
