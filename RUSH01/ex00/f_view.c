/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_view.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 06:41:18 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:18 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putboard(int **arr)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (x < 5)
	{
		while (y < 5)
		{
			ft_putchar(arr[x][y] + '0');
			if (y % 4 == 0)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			y++;
		}
		y = 1;
		x++;
	}
}

/*
** void	ft_putboard_full(int **arr)
** {
** 	int x;
** 	int y;
**
** 	x = 0;
** 	y = 0;
** 	while (x < 6)
** 	{
** 		while (y < 6)
** 		{
** 			ft_putchar(arr[x][y] + '0');
** 			if (y % 5 == 0 && y != 0)
** 				ft_putchar('\n');
** 			else
** 				ft_putchar(' ');
** 			y++;
** 		}
** 		y = 0;
** 		x++;
** 	}
** }
*/
