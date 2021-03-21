/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_box.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:23:50 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 15:08:55 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_initialize_zero(int **box, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			box[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_initialize_size(int **box, int size, int i, int j)
{
	int k;

	k = -1;
	if (i == 0)
	{
		while (++k < size)
			box[k][j] = k + 1;
	}
	if (i == 1)
	{
		while (++k < size)
			box[k][j] = size - k;
	}
	if (i == 2)
	{
		while (++k < size)
			box[j][k] = k + 1;
	}
	if (i == 3)
	{
		while (++k < size)
			box[j][k] = size - k;
	}
}

void	ft_initialize_one(int **box, int size, int i, int j)
{
	if (i == 0)
		box[0][j] = size;
	if (i == 1)
		box[size - 1][j] = size;
	if (i == 2)
		box[j][0] = size;
	if (i == 3)
		box[j][size - 1] = size;
}

void	ft_initialize_box(int **box, int **data, int size)
{
	int i;
	int j;

	ft_initialize_zero(box, size);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			if (data[i][j] == size)
				ft_initialize_size(box, size, i, j);
			else if (data[i][j] == 1)
				ft_initialize_one(box, size, i, j);
			j++;
		}
		i++;
	}
}
