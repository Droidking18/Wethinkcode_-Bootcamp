/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:32:33 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/12 14:14:15 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	l;
	char temp;

	i = 0;
	l = -1;
	while (str[i])
		i++;
	while (l > i)
	{
		temp = str[i];
		str[i] = str[l];
		str[l] = temp;
		l--;
		i++;
	}
	return (str);
}