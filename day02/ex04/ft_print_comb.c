/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:24:32 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/11 12:54:12 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_print_comb(void)
{
char num1;
char num2;
char num3;
	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);	
				if ((num1 <= '7') || (num2 <= '8') || (num3 <= '9'))
					write(1, ", ", 2);
				
				num3++;
			}
			num2++;
	}
	num1++;
}
}
