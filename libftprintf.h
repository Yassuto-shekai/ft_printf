/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:44:42 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 10:22:46 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_putchar(char c);
int	ft_bonus_1(const char *str, va_list one, int *i);
int	ft_putstr(char *str);
int	ft_unint(unsigned long long n);
int	ft_printf(const char *str, ...);
int	ft_countnbr(unsigned long long n);
int	ft_putone(va_list one, const char *str, int *i);
int	ft_nbr(int n);
int	ft_strlen(const char *str);
int	ft_putaddress(void *p);

#endif
