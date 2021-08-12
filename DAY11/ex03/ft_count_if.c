/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:10:42 by chly-huc          #+#    #+#             */
/*   Updated: 2019/11/14 16:33:49 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int cmpt;

	i = 0;
	cmpt = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			cmpt++;
	}
	return (cmpt);
}