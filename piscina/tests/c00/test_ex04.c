/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VPTR <vptr@codex.local>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 21:22:47 by VPTR              #+#    #+#             */
/*   Updated: 2026/02/06 21:22:47 by VPTR             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// "In C, type safety is the caller's responsibility, not the function's."
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative(42);
	ft_is_negative(-1);
}
