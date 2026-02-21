/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 20:28:21 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/20 20:28:21 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	num;
	int				shift;
	int				nibble;
	char			c;
	char			*ptr;
	unsigned int	i;
	unsigned int	offset;
	int				high;
	int				low;
	char			c1;
	char			c2;
	int				bytes_printed;
	int				bytes_missing;
	int				spaces_needed;
	int				j;

	offset = 0;
	while (offset < size)
	{
		shift = 60;
		num = (unsigned long)((char *)addr + offset);
		while (shift >= 0)
		{
			nibble = (num >> shift) & 0xf;
			c = "0123456789abcdef"[nibble];
			write(1, &c, 1);
			shift -= 4;
		}
		write(1, ": ", 2);
		i = 0;
		ptr = (char *)addr + offset;
		while (i < 16 && (offset + i) < size)
		{
			high = ptr[i] / 16;
			low = ptr[i] % 16;
			c1 = "0123456789abcdef"[high];
			c2 = "0123456789abcdef"[low];
			write(1, &c1, 1);
			write(1, &c2, 1);
			i++;
			if (i % 2 == 0)
				write(1, " ", 1);
		}
		
		// PADDING
		bytes_printed = i;
		bytes_missing = 16 - bytes_printed;
		spaces_needed = bytes_missing * 2 + (bytes_missing / 2);
		j = 0;
		while (j < spaces_needed)
		{
			write(1, " ", 1);
			j++;
		}
		
		write(1, " ", 1);
		i = 0;
		while (i < 16 && (offset + i) < size)
		{
			if (ptr[i] >= 32 && ptr[i] <= 126)
				write(1, &ptr[i], 1);
			else
				write(1, ".", 1);
			i++;
		}
		write(1, "\n", 1);
		offset += 16;
	}
}
