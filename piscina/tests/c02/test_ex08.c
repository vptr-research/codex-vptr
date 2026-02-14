/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:56:30 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/13 20:56:30 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strlowcase(char *str);

int	main(void)
{
	char	test[] = "Hello";
	char	test1[] = "hello";
	char	test2[] = "    hhheeelloo";
	int		i;

	i = 0;
	ft_strlowcase(test);
	while (test[i])
	{
		write (1, &test[i], 1);
		i++;
	}
	write (1, "\n", 1);
	i = 0;
	ft_strlowcase(test1);
	while (test1[i])
	{
		write (1, &test1[i], 1);
		i++;
	}
	write (1, "\n", 1);
	i = 0;
	ft_strlowcase(test2);
	while (test2[i])
	{
		write (1, &test2[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
