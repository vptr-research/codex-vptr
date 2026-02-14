/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:58:27 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/13 19:58:27 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*test;
	char	*test1;
	char	*test2;
	int		got;

	test = "     He3LL0   ";
	test1 = "hello\n";
	test2 = "\n\n\n H#ll*";
	got = ft_str_is_printable(test) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_printable(test1) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_printable(test2) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	return (0);
}
