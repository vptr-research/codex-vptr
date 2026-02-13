/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:23:02 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 17:23:02 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	char	*str2;
	int		got;

	str = "HelloWorld";
	str2 = "Daniel Sac@ana";
	got = ft_str_is_alpha(str) + 48;
	write (1, &got, 1);
	got = ft_str_is_alpha(str2) + 48;
	write (1, &got, 1);
	return (0);
}
