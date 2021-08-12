/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_solver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 10:46:31 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:42 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_backtrack(int **board, t_coords target, t_bool *solved)
{
	if (*solved)
		return ;
	if (ft_co_get(board, target) == 4)
	{
		ft_co_reset(board, target);
		return ;
	}
	ft_co_inc(board, target);
	if (ft_is_valid(board, target))
	{
		if (target.row == 4 && target.column == 4)
		{
			*solved = TRUE;
			ft_putboard(board);
			return ;
		}
		ft_backtrack(board, ft_co_next(target), solved);
		ft_backtrack(board, target, solved);
	}
	else
		ft_backtrack(board, target, solved);
}

t_bool	ft_solve(int **board)
{
	t_bool		solved;
	t_coords	target;

	solved = FALSE;
	target.row = 1;
	target.column = 1;
	ft_backtrack(board, target, &solved);
	return (solved);
}
