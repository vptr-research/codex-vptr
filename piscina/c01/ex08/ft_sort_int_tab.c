/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:30:47 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/12 14:30:47 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	comp;
	int	swap;

	i = 0;
	while (i < size)
	{
		comp = i + 1;
		while (comp < size)
		{
			if (tab[i] > tab[comp])
			{
				swap = tab[i];
				tab[i] = tab[comp];
				tab[comp] = swap;
				comp++;
			}
			else
				comp++;
		}
		i++;
	}
}
