/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 06:35:43 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:59:04 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	main(int argc, char **argv)
{
	int **board;

	if (argc != 2 || !ft_check_format(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(board = ft_init()))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_build(board, argv[1]);
	if (!ft_solve(board))
	{
		ft_free(board);
		ft_putstr("Error\n");
		return (0);
	}
	ft_free(board);
	return (0);
}
