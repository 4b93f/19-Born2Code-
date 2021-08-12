/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_valid_bounds.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:17:54 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:52 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

t_bool	ft_check_row_left(int **board, int row)
{
	int i;
	int viewed;
	int max;
	int zeros;
	int bound;

	i = 1;
	viewed = 0;
	max = 0;
	zeros = 0;
	bound = board[row][0];
	while (i < 5)
	{
		if (board[row][i])
		{
			if (board[row][i] > max)
				viewed++;
			max = (board[row][i] > max) ? board[row][i] : max;
		}
		else
			zeros++;
		i++;
	}
	return (bound >= viewed && (viewed + zeros) >= bound ? TRUE : FALSE);
}

t_bool	ft_check_row_right(int **board, int row)
{
	int i;
	int viewed;
	int max;
	int zeros;
	int bound;

	i = 4;
	viewed = 0;
	max = 0;
	zeros = 0;
	bound = board[row][5];
	while (i > 0)
	{
		if (board[row][i])
		{
			if (board[row][i] > max)
				viewed++;
			max = (board[row][i] > max) ? board[row][i] : max;
		}
		else
			zeros++;
		i--;
	}
	return ((viewed + zeros) >= bound ? TRUE : FALSE);
}

t_bool	ft_check_column_top(int **board, int column)
{
	int i;
	int viewed;
	int max;
	int zeros;
	int bound;

	i = 1;
	viewed = 0;
	max = 0;
	zeros = 0;
	bound = board[0][column];
	while (i < 5)
	{
		if (board[i][column])
		{
			if (board[i][column] > max)
				viewed++;
			max = (board[i][column] > max) ? board[i][column] : max;
		}
		else
			zeros++;
		i++;
	}
	return (bound >= viewed && (viewed + zeros) >= bound ? TRUE : FALSE);
}

t_bool	ft_check_column_bottom(int **board, int column)
{
	int i;
	int viewed;
	int max;
	int zeros;
	int bound;

	i = 4;
	viewed = 0;
	max = 0;
	zeros = 0;
	bound = board[5][column];
	while (i > 0)
	{
		if (board[i][column])
		{
			if (board[i][column] > max)
				viewed++;
			max = (board[i][column] > max) ? board[i][column] : max;
		}
		else
			zeros++;
		i--;
	}
	return ((viewed + zeros) >= bound ? TRUE : FALSE);
}
