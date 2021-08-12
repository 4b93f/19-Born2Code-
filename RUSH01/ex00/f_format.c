/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_format.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:28:00 by ancoulon          #+#    #+#             */
/*   Updated: 2019/11/10 19:57:46 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

t_bool	ft_format_str(char *arg)
{
	int i;
	int space;

	i = 0;
	space = 1;
	while (arg[i])
	{
		if (arg[i] == ' ')
		{
			if (space)
				return (FALSE);
			space = 1;
		}
		else
		{
			if (!space)
				return (FALSE);
			if (arg[i] < '1' || arg[i] > '4')
				return (FALSE);
			space = 0;
		}
		i++;
	}
	return (TRUE);
}

t_bool	ft_format_tot(char *arg)
{
	int i;

	i = 0;
	while (i < 24)
	{
		if (arg[i] != ' ')
		{
			if ((arg[i] + arg[i + 8] - 96) > 5 ||
			(arg[i] + arg[i + 8] - 96) < 3)
				return (FALSE);
		}
		if (i == 6)
			i = 14;
		i++;
	}
	return (TRUE);
}

t_bool	ft_check_format(char *arg)
{
	if (ft_strlen(arg) != 31)
		return (FALSE);
	if (!ft_format_str(arg))
		return (FALSE);
	if (!ft_format_tot(arg))
		return (FALSE);
	return (TRUE);
}
