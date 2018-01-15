/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 08:37:55 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/14 12:52:59 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int temp;
	int temp2;

	temp = 1;
	temp2 = 1;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
		while (temp <= nb)
		{
			temp2 = temp * temp2;
			temp++;
		}
	return (temp2);
}
