/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:43:13 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 18:22:14 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_types(va_list ap, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'x' || c == 'X')
		ft_hexa(va_arg(ap, unsigned int), c, count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_adress(va_arg(ap, unsigned long), count);
	}
	else if (c == 'u')
		ft_print_uns(va_arg(ap, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *src, ...)
{
	va_list		ap;
	int			count;
	int			i;

	va_start (ap, src);
	count = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] == '%')
		{
			i++;
			ft_types(ap, src[i], &count);
		}
		else
			ft_putchar(src[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
