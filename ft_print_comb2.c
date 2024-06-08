/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkudmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:37:33 by mkudmani          #+#    #+#             */
/*   Updated: 2024/06/08 15:37:57 by mkudmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int	main(void)
// {
// 	char	a;
// 	char	a1;
// 	char	b;
// 	char	b1;

// 	a = '0';
// 	a1 = '0';
// 	b = '0';
// 	b1 = '0';
// 	while (b <= '9' && b1 <= '9')
// 	{
// 		if (a != '9' || b != '9')
// 		{
// 			write(1, ", ", 2);
// 		}
// 		if (b1 != '9')
// 		{
// 			b1++;
// 		}
// 		else
// 		{
// 			b++;
// 		}
// 	}
// 	while (a <= '9' && a1 <= '9')
// 	{
// 		if (b == '9' && b1 == '9')
// 		{
// 			if (a1 != '9')
// 			{
// 				a1++;
// 			}
// 			else
// 			{
// 				a++;
// 			}
// 		}
// 		write(1, &a, 1);
// 		write(1, &a1, 1);
// 		write(1, &b, 1);
// 		write(1, &b1, 1);
// 	}
// 	return (0);
// }

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int tens;
	int ones;

	if (i < 10)
	{
		print_char('0');
		print_char(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		print_char(tens + '0');
		print_char(ones + '0');
	}
}