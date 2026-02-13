/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:52:48 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 16:52:48 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			*src;
	char			*src2;
	char			dest[20];
	unsigned int	i;

	i = 0;
	src = "Hello";
	src2 = "Hello World";
	ft_strncpy(dest, src, 5);
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	ft_strncpy(dest, src2, 10);
	i = 0;
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
	return (0);
}
