/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:40:41 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/14 15:38:38 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (power > 1)
		{
			i = i * nb;
			power--;
		}
	return (i);
}

int		main(void)
{
	printf("%d", ft_iterative_power(5, 3));
}
