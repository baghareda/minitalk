/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:25:24 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 18:04:47 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_print_uns(unsigned int nb, int *count)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, count);
	}
}
