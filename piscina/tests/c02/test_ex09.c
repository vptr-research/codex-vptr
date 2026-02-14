/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 21:23:32 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/13 21:23:32 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	test[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	int		i;

	i = 0;
	ft_strcapitalize(test);
	while (test[i])
	{
		write (1, &test[i], 1);
		i++;
	}
	return (0);
}
