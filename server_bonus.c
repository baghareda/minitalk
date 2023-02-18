/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:50:53 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 22:20:00 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static void	handle_signal(int signal)
{
	static int	byte = 0;
	static int	bit = 0;

	if (signal == SIGUSR1)
	{
		byte |= (0x01 << bit);
		bit++;
	}
	else if (signal == SIGUSR2)
	{
		byte &= ~(0x00 << bit);
		bit++;
	}
	if (bit == 8)
	{
		write(1, &byte, 1);
		byte = 0;
		bit = 0;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	pid = getpid();
	(void)av;
	if (ac != 1)
	{
		ft_printf("verify the input");
	}
	ft_printf("Server started with PID %d\n", pid);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
