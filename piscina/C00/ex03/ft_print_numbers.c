/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:58:59 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/06 20:58:59 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	print_numbers;

	print_numbers = '0';
	while (print_numbers <= '9')
	{
		write (1, &print_numbers, 1);
		print_numbers++;
	}
}
