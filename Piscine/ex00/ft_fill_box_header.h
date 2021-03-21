/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_box_header.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:53:58 by ccottin           #+#    #+#             */
/*   Updated: 2021/03/21 15:54:54 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILL_BOX_HEADER_H
# define FT_FILL_BOX_HEADER_H

void	ft_puttab(int **tab, int size);
void	ft_puterror();
int		ft_verif_0(int **box, int **data, int size);
int		ft_verif_1(int **box, int **data, int size);
int		ft_verif_2(int **box, int **data, int size);
int		ft_verif_3(int **box, int **data, int size);
int		ft_verif_finish(int **box, int **data, int size);
int		ft_get_val(int **box, int size);
int		ft_get_col(int **box, int size);

#endif
