/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_coords.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:30:10 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:34 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

t_coords	ft_co_next(t_coords co)
{
	if (co.column >= 4)
	{
		co.row++;
		co.column = 1;
	}
	else
		co.column++;
	return (co);
}

int			ft_co_get(int **board, t_coords co)
{
	return (board[co.row][co.column]);
}

void		ft_co_inc(int **board, t_coords co)
{
	board[co.row][co.column]++;
}

void		ft_co_reset(int **board, t_coords co)
{
	board[co.row][co.column] = 0;
}
