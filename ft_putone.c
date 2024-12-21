/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:16:52 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 10:22:02 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_hexa(va_list one, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
	{
		i = ft_putnbr_base(va_arg(one, unsigned long long), "0123456789abcdef");
		return (i);
	}
	if (c == 'X')
	{
		i = ft_putnbr_base(va_arg(one, unsigned long long), "0123456789ABCDEF");
		return (i);
	}
	if (c == 'p')
	{
		i = ft_putaddress(va_arg(one, void *));
		return (i);
	}
	return (i);
}

int	ft_putone(va_list one, const char *str, int *i)
{
	(*i)++;
	if (str[*i] == 's')
		return (ft_putstr(va_arg(one, char *)));
	if (str[*i] == '#' || str[*i] == ' ' || str[*i] == '+')
		return (ft_bonus_1(str, one, i));
	if (str[*i] == 'c')
		return (ft_putchar(va_arg(one, int)));
	if (str[*i] == 'd' || str[*i] == 'i')
		return (ft_nbr(va_arg(one, int)));
	if (str[*i] == '%')
		return (ft_putchar('%'));
	if (str[*i] == 'x' || str[*i] == 'X' || str[*i] == 'p')
		return (ft_hexa(one, str[*i]));
	if (str[*i] == 'u')
		return (ft_unint(va_arg(one, unsigned long long)));
	else
		return (ft_putchar('%') + ft_putchar(str[*i]));
}
