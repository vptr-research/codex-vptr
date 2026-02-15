/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:40:44 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/14 21:40:44 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char				*src;
	char				dest[15];
	char				dest1[15];
	char				dest2[15];
	unsigned int		got;
	int					i;

	i = 0;
	src = "Hello";
	dest2[0] = 'X';
	got = ft_strlcpy(dest, src, 11) + 48;
	write (1, &got, 1);
	write (1, "- ", 2);
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	write (1, "\n", 1);
	i = 0;
	got = ft_strlcpy(dest1, src, 3) + 48;
	write (1, &got, 1);
	write (1, "- ", 2);
	while (dest[i])
	{
		write (1, &dest1[i], 1);
		i++;
	}
	write (1, "\n", 1);
	i = 0;
	got = ft_strlcpy(dest2, src, 0) + 48;
	write (1, &got, 1);
	write (1, "- ", 2);
	while (dest[i])
	{
		write (1, &dest2[i], 1);
		i++;
	}
	write (1, "\n", 1);
	i = 0;
	got = ft_strlcpy(dest,"", 5) + 48;
	write (1, &got, 1);
	write (1, "- ", 2);
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
