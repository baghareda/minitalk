/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:28:39 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/17 18:57:10 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal)
{
	static int	byte = 0;  // static variable to store the received byte
	static int	bit = 0;  // static variable to store the current bit position

	if (signal == SIGUSR1)
	{
		byte |= (0x01 << bit); // set the current bit to 1
		bit++;
	}
	else if (signal == SIGUSR2)
	{
		byte &= ~(0x00 << bit); // set the current bit to 0
		bit++;
	}
    // check if we've received a full byte
	if (bit == 8)
	{
		write(1, &byte, 1);
		byte = 0;
		bit = 0;
	}
}

int main(int ac, char **av)
{
    
    int pid;
    pid = getpid();
    (void)av;
    if (ac != 1)
    {
        printf("verify the input");
    }
    printf("Server started with PID %d\n", pid);
        signal(SIGUSR1, handle_signal);
        signal(SIGUSR2, handle_signal);
    while (1)
        pause();
   
    return (0);
}

