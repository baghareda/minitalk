/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:50:10 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/18 18:50:32 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <string.h>

int		ft_atoi(const char *str);
void	ft_putchar(char s, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putstr(char *s, int *count);
void	ft_print_uns(unsigned int nb, int *count);
void	ft_adress(unsigned long nb, int *count);
void	ft_hexa(unsigned int n, char c, int *count);
int		ft_printf(const char *src, ...);

#endif
