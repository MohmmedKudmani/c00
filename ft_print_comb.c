/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:37:53 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/08 13:38:01 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	body(char char1, char char2, char char3)
{
	ft_putchar(char1 + '0');
	ft_putchar(char2 + '0');
	ft_putchar(char3 + '0');
}

int	main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				body(num1, num2, num3);
				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					return (0);
				}
				ft_putchar(',');
				ft_putchar(' ');
				num3++;
			}
			num2++;
		}
		num1++;
	}

	return (0);
}