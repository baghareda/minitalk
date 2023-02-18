/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:13:04 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 18:04:44 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (s == 0)
		ft_putstr("(null)", count);
	else
	{
		while (s[i])
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}
