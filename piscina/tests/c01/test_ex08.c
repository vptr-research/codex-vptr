/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:46:59 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 14:46:59 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		arr[6];
	int		i;
	char	c;

	i = 0;
	arr[0] = 2;
	arr[1] = 5;
	arr[2] = 9;
	arr[3] = 4;
	arr[4] = 0;
	arr[5] = 0;
	ft_sort_int_tab(arr, 6);
	while (i < 6)
	{
		c = arr[i] + 48;
		write (1, &c, 1);
		i++;
	}
	return (0);
}
