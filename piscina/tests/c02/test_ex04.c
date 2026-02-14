/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:36:06 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/13 19:36:06 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*test;
	char	*test1;
	char	*test2;
	int		got;

	test = "Hello";
	test1 = "hello";
	test2 = "h3llo";
	got = ft_str_is_lowercase(test) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_lowercase(test1) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	got = ft_str_is_lowercase(test2) + 48;
	write (1, &got, 1);
	write (1, "\n", 1);
	return (0);
}
