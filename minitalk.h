/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebagha <rebagha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:23:13 by rebagha           #+#    #+#             */
/*   Updated: 2023/02/17 01:02:22 by rebagha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <string.h>



int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_types(va_list ap, char c, int *count);
void	ft_adress(unsigned long nb, int *count);
void	ft_hexa(unsigned int n, char c, int *count);
int     ft_printf(const char *src, ...);
void	ft_putchar(char s, int *count);
void	ft_putstr(char *s, int *count);

#endif
