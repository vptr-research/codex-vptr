/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:20:39 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/14 21:20:39 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
