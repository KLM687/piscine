/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:21:13 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/21 15:16:34 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_val(int **box, int size)
{
	int i;
	int val;
	int col;
	int vu;

	val = size;
	col = 0;
	while (val > 0)
	{
		i = 0;
		vu = 0;
		while (i < size)
		{
			if (box[i][col] == val)
				vu = 1;
			i++;
		}
		if (!vu)
			return (val);
		val = col == size - 1 ? val - 1 : val;
		col = col == size - 1 ? 0 : col + 1;
	}
	return (0);
}

int	ft_get_col(int **box, int size)
{
	int i;
	int val;
	int col;
	int vu;

	val = size;
	col = 0;
	while (val > 0)
	{
		i = 0;
		vu = 0;
		while (i < size)
		{
			if (box[i][col] == val)
				vu = 1;
			i++;
		}
		if (!vu)
			return (col);
		val = col == size - 1 ? val - 1 : val;
		col = col == size - 1 ? 0 : col + 1;
	}
	return (0);
}
