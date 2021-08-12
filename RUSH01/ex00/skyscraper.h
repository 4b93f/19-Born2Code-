/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 06:34:41 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:58:27 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

# include <unistd.h>
# include <stdlib.h>

typedef enum		e_bool
{
	TRUE = 1,
	FALSE = 0
}					t_bool;

typedef struct		s_coords
{
	unsigned int	row;
	unsigned int	column;
}					t_coords;

int					ft_strlen(char *str);

void				ft_putstr(char *str);

void				ft_putboard(int **board);

int					**ft_init(void);

void				ft_free(int **board);

void				ft_build(int **board, char *arg);

t_bool				ft_check_format(char *arg);

t_bool				ft_check_row_left(int **board, int row);

t_bool				ft_check_row_right(int **board, int row);

t_bool				ft_check_column_top(int **board, int column);

t_bool				ft_check_column_bottom(int **board, int column);

t_bool				ft_check_row_values(int **board, int row);

t_bool				ft_check_column_values(int **board, int row);

t_coords			ft_co_next(t_coords co);

int					ft_co_get(int **board, t_coords co);

void				ft_co_inc(int **board, t_coords co);

void				ft_co_reset(int **board, t_coords co);

t_bool				ft_is_valid(int **board, t_coords co);

t_bool				ft_solve(int **board);

#endif
