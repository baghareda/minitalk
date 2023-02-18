/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:25:32 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 18:04:09 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_adress(unsigned long nb, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(hexa[nb % 16], count);
	}
	else
	{
		ft_adress(nb / 16, count);
		ft_adress(nb % 16, count);
	}
}
