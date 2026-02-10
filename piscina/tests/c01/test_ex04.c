/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 21:05:32 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/09 21:05:32 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	convert(int a, int b)
{
	a = a + 48;
	b = b + 48;
	write (1, &a, 1);
	write (1, &b, 1);
}

int	main(void)
{
	int	div;
	int	mod;

	div = 10;
	mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	convert(div, mod);
	return (0);
}
