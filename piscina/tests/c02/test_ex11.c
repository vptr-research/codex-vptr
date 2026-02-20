/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex11.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 21:23:43 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/19 21:23:43 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Oi\nvoce esta bem?");
	write (1, "\n", 1);
	ft_putstr_non_printable("Hello\tWorld");
	write (1, "\n", 1);
	ft_putstr_non_printable("");
	write (1, "\n", 1);
	ft_putstr_non_printable("Test\x7f!");
	write (1, "\n", 1);
	ft_putstr_non_printable("\x01\x02\x03");
	write (1, "\n", 1);
	return (0);
}
