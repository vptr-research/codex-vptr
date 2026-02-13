/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:49:15 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 13:49:15 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int		arr[6];
	int		i;
	char	c;

	i = 0;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	ft_rev_int_tab(arr, 6);
	while (i < 6)
	{
		c = arr[i] + '0';
		write (1, &c, 1);
		i++;
	}
	return (0);
}
