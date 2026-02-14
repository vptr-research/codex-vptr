/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:47:38 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/13 19:47:38 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*test;
	char	*test1;
	char	*test2;
	int		got;

	test = "HELLO";
	test1 = " HELLO ";
	test2 = "Hello";
	got = ft_str_is_uppercase(test) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_uppercase(test1) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_uppercase(test2) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	return (0);
}
