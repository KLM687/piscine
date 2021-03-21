/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:51:36 by ccottin           #+#    #+#             */
/*   Updated: 2021/03/21 15:53:48 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_H
# define MAIN_HEADER_H

void	ft_atoi_tab(char *str, int **tab, int size);
int		ft_verif_arg(int **data, int size);
void	ft_puttab(int **tab, int size);
void	ft_puterror(void);
void	ft_initialize_box(int **box, int **data, int size);
void	ft_fill_box(int **box, int **data, int size, int *find);

#endif
