/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 21:31:46 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/06 21:31:46 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first_d;
	char	second_d;
	char	third_d;

	first_d = '0';
	while (first_d <= '7')
	{
		while (second_d <= '8')
		{
			while (third_d <= '9')
			{
				if ((first_d < second_d) && (second_d < third_d))
				{
					print_numbers(first_d, second_d, third_d);
				}
				third_d++;
			}
			third_d = '2';
			second_d++;
		}
		second_d = '1';
		first_d++;
	}
}
