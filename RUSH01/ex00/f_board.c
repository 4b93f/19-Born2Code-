/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_board.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 07:08:45 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:57:36 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int		**ft_init(void)
{
	int i;
	int **board;

	i = 0;
	if (!(board = malloc(sizeof(int *) * 6)))
		return (NULL);
	while (i < 6)
	{
		if (!(board[i] = malloc(sizeof(int) * 6)))
			return (NULL);
		i++;
	}
	return (board);
}

void	ft_free(int **board)
{
	int i;

	if (board)
	{
		i = 0;
		while (i < 6)
		{
			free(board[i]);
			i++;
		}
		free(board);
	}
}

void	ft_border_row(int **board, char *arg)
{
	int i;
	int x;
	int y;

	i = 0;
	y = 1;
	x = 0;
	while (y < 5)
	{
		board[i][y] = arg[x] - '0';
		x = x + 2;
		y++;
	}
	i = 5;
	y = 1;
	while (y < 5)
	{
		board[i][y] = arg[x] - '0';
		x = x + 2;
		y++;
	}
}

void	ft_border_column(int **board, char *arg)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	y = 0;
	x = 16;
	while (i < 5)
	{
		board[i][y] = arg[x] - '0';
		x = x + 2;
		i++;
	}
	i = 1;
	y = 5;
	while (i < 5)
	{
		board[i][y] = arg[x] - '0';
		x = x + 2;
		i++;
	}
}

void	ft_build(int **board, char *arg)
{
	int		row;
	int		column;

	ft_border_row(board, arg);
	ft_border_column(board, arg);
	board[0][0] = 0;
	board[0][5] = 0;
	board[5][0] = 0;
	board[5][5] = 0;
	row = 1;
	while (row < 5)
	{
		column = 1;
		while (column < 5)
		{
			board[row][column] = 0;
			column++;
		}
		row++;
	}
}
