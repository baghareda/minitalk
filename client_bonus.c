/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:18:42 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 19:18:53 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	send_string(pid_t pid, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			if ((str[i] >> j) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("U need: %s pid\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	send_string(pid, str);
	ft_printf("String sent to server\n");
	return (0);
}
