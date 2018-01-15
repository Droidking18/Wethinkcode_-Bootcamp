/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_power.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:17:40 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/14 16:52:35 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
