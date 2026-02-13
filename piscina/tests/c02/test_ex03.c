/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:01:54 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 21:01:54 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	got;

	test1 = "Hello";
	test2 = "\0";
	test3 = "1231254";
	test4 = "Hell0";
	got = ft_str_is_numeric(test1) + 48;
	write (1, &got, 1);
	write (1, "\0", 1);
	got = ft_str_is_numeric(test2) + 48;
	write (1, &got, 1);
	write (1, "\0", 1);
	got = ft_str_is_numeric(test3) + 48;
	write (1, &got, 1);
	write (1, "\0", 1);
	got = ft_str_is_numeric(test4) + 48;
	write (1, &got, 1);
	write (1, "\0", 1);
	return (0);
}
