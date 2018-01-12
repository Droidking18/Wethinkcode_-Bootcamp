/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 12:19:52 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/11 13:09:24 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void	ft_print_comb2(char num1, char num2, char num3, char num4)
{
	while (num4 <= '9')
	{
		num4++;
	ft_putchar(num4);
	ft_putchar(num3);
	ft_putchar(num2);
	ft_putchar(num1);
	
	if (num4 == '9')
		while (num3 <= '9')
		{
			num3++;
		ft_putchar(num4);
		ft_putchar(num3);
		ft_putchar(num2);
		ft_putchar(num1);
		if (num3 == '9')
			while (num2 <= '9')
			{
				num2++;
					ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				ft_putchar(num4);
				if (num2 <= '9')
					while (num1 <= '9')
					{
						num1++;
							ft_putchar(num1);
						ft_putchar(num2);
						ft_putchar(num3);
						ft_putchar(num4);
					}
			}
		}
	}
}

int		main(void)
{
	char num1;
	char num2;
	char num3;
	char num4;
	
	ft_print_comb2(num1,num2,num3,num4);
	return (0);
}
