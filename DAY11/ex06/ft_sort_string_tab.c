/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:38:54 by chly-huc          #+#    #+#             */
/*   Updated: 2019/11/21 13:03:06 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && s2[i] == s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (tab[i + 1])
	{
		while (tab[j])
		{
			while (!(ft_strcmp(tab[i], tab[j]) > 0))
				i++;
		}
		tab[i] = 0;
	}
}
