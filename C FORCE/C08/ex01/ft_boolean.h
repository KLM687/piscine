/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:47:57 by flee              #+#    #+#             */
/*   Updated: 2021/03/29 15:24:00 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int		t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS write(1, "\n", 1)
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG  "I have an odd number of arguments."
# define EVEN(x) nbr % 2 == 0

#endif
