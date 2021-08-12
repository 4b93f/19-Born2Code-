/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_valid_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:43:41 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:07 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

t_bool	ft_check_row_values(int **board, int row)
{
	int i;
	int values[4];

	i = 1;
	values[0] = 0;
	values[1] = 0;
	values[2] = 0;
	values[3] = 0;
	while (i < 5)
	{
		if (board[row][i])
		{
			if (values[board[row][i] - 1])
				return (FALSE);
			else
				values[board[row][i] - 1] = 1;
		}
		i++;
	}
	return (TRUE);
}

t_bool	ft_check_column_values(int **board, int column)
{
	int i;
	int values[4];

	i = 1;
	values[0] = 0;
	values[1] = 0;
	values[2] = 0;
	values[3] = 0;
	while (i < 5)
	{
		if (board[i][column])
		{
			if (values[board[i][column] - 1])
				return (FALSE);
			else
			{
				values[board[i][column] - 1] = 1;
			}
		}
		i++;
	}
	return (TRUE);
}
