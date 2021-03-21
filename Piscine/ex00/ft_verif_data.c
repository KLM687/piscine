/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:06:54 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 15:42:03 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verif_0(int **box, int **data, int size)
{
	int col;
	int row;
	int min;
	int n;

	col = 0;
	while (col < size)
	{
		row = 0;
		n = 0;
		min = 0;
		while (row < size)
		{
			if (min < box[row][col])
			{
				min = box[row][col];
				n++;
			}
			row++;
		}
		if (n > data[0][col])
			return (0);
		col++;
	}
	return (1);
}

int		ft_verif_1(int **box, int **data, int size)
{
	int col;
	int row;
	int min;
	int n;

	col = 0;
	while (col < size)
	{
		row = size - 1;
		n = 0;
		min = 0;
		while (row >= 0)
		{
			if (min < box[row][col])
			{
				min = box[row][col];
				n++;
			}
			row--;
		}
		if (n > data[1][col])
			return (0);
		col++;
	}
	return (1);
}

int		ft_verif_2(int **box, int **data, int size)
{
	int col;
	int row;
	int min;
	int n;

	row = 0;
	while (row < size)
	{
		col = 0;
		n = 0;
		min = 0;
		while (col < size)
		{
			if (min < box[row][col])
			{
				min = box[row][col];
				n++;
			}
			col++;
		}
		if (n > data[2][row])
			return (0);
		row++;
	}
	return (1);
}

int		ft_verif_3(int **box, int **data, int size)
{
	int col;
	int row;
	int min;
	int n;

	row = 0;
	while (row < size)
	{
		col = size - 1;
		n = 0;
		min = 0;
		while (col >= 0)
		{
			if (min < box[row][col])
			{
				min = box[row][col];
				n++;
			}
			col--;
		}
		if (n > data[3][row])
			return (0);
		row++;
	}
	return (1);
}
