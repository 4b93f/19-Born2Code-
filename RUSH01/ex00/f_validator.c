/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_validator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 09:23:26 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:59 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

t_bool	ft_is_valid(int **board, t_coords co)
{
	if (!ft_check_row_values(board, co.row))
		return (FALSE);
	if (!ft_check_column_values(board, co.column))
		return (FALSE);
	if (!ft_check_row_left(board, co.row))
		return (FALSE);
	if (!ft_check_row_right(board, co.row))
		return (FALSE);
	if (!ft_check_column_top(board, co.column))
		return (FALSE);
	if (!ft_check_column_bottom(board, co.column))
		return (FALSE);
	return (TRUE);
}
