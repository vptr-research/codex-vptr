/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 01:06:12 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/07 01:06:12 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_num(int a, int b)
{
	char	con1;
	char	con2;
	char	con3;
	char	con4;

	con1 = (a / 10 + 48);
	con2 = (a % 10 + 48);
	con3 = (b / 10 + 48);
	con4 = (b % 10 + 48);
	write (1, &con1, 1);
	write (1, &con2, 1);
	write (1, " ", 1);
	write (1, &con3, 1);
	write (1, &con4, 1);
	if (a != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				convert_num(num1, num2);
			}
			num2++;
		}
		num1++;
	}
}
