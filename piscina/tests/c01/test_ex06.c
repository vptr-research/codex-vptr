/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:53:38 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/11 20:53:38 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*test;
	char	len;

	test = "Hello";
	len = ft_strlen(test) + 48;
	write (1, &len, 1);
	return (0);
}
