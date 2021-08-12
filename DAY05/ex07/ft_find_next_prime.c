/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:10:10 by chly-huc          #+#    #+#             */
/*   Updated: 2019/11/06 21:10:58 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long	nbr;
	int		i;

	nbr = nb;
	i = 2;
	if (nbr <= 0 || nbr == 1)
		return (0);
	while (nbr / i >= i)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr <= 0)
		return (2);
	if (nbr == 0 && nbr <= 1)
		return (0);
	while (ft_is_prime(nbr) == 0)
		nbr++;
	return (nbr);
}
