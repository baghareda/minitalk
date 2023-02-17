/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:08:08 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/16 02:24:20 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_hexa(unsigned int n, char c, int *count)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n % 16], count);
	else
	{
		ft_hexa(n / 16, c, count);
		ft_hexa(n % 16, c, count);
	}
}
