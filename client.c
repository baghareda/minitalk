/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:43:23 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/17 18:59:05 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk.h"

void send_string(pid_t pid, char *str) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        j = 0;

        while (j < 8) {
            if ((str[i] >> j) & 1) {
                kill(pid, SIGUSR1);
            } else {
                kill(pid, SIGUSR2);
            }
            usleep(100);
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s pid\n", argv[0]);
        return 1;
    }

    pid_t pid = atoi(argv[1]);
    char *str = argv[2];

    send_string(pid, str);
    printf("String sent to server\n");

    return 0;
}
